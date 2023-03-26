#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <ctime>
#include <cstring>

std::tm str_todate(const char *str)
{
    struct std::tm tm;
    bool error_generating = false;
    std::string year_str = std::string(str).substr(0, 4);
    const char *year = year_str.c_str();
    std::string month_str = std::string(str).substr(5, 2);
    const char *month = month_str.c_str();
    std::string day_str = std::string(str).substr(8, 2);
    const char *day = day_str.c_str();
    if (atoi(year) > 2023 || atoi(year) < 2001 || atoi(month) < 1 || atoi(month) > 12 || atoi(day) > 31 || atoi(day) < 1)
        error_generating = true;

    strptime(str, "%Y-%m-%d", &tm);
    // 123 represents 2023
    if (tm.tm_year < 0 || tm.tm_year > 123 || tm.tm_mon < 0 || tm.tm_mon > 11 || tm.tm_mday > 31 || tm.tm_mday < 1 || strlen(str) != 10 || error_generating)
    {
        strptime("9999-13-32", "%Y-%m-%d", &tm);
    }
    return tm;
}

// Needed to compile to define operator
bool operator<(const std::tm &t1, const std::tm &t2)
{
    if (t1.tm_year != t2.tm_year) //
        return t1.tm_year < t2.tm_year;
    if (t1.tm_mon != t2.tm_mon)
        return t1.tm_mon < t2.tm_mon;
    if (t1.tm_mday != t2.tm_mday)
        return t1.tm_mday < t2.tm_mday;
    return false;
};

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    std::ifstream database("./data.csv");
    if (database.fail())
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }

    std::map<struct std::tm, double> database_record;
    std::string line;
    // Jump csv Headers
    std::getline(database, line);
    (void)**argv;
    while (std::getline(database, line))
    {
        int p = line.find(',');
        const char *str = line.substr(p + 1, line.size() - p).c_str();
        double num_float = std::atof(str);
        struct std::tm tm = str_todate(line.substr(0, 10).c_str());
        database_record[tm] = num_float;
    }

    std::map<struct std::tm, double>::iterator it;

    it = database_record.upper_bound(str_todate("2022-03-26"));
    it--;

    std::ifstream input_file(argv[1]);
    // Jump txt Headers
    std::getline(input_file, line);
    while (std::getline(input_file, line))
    {

        // p needs to be 11 to be well formated and different than -1
        int p = line.find('|');
        // Date verification
        struct std::tm tm = str_todate(line.substr(0, 10).c_str());

        if (tm.tm_year > 2023 || p != 11)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string number;
        if (line.size() > 13)
            number = std::string(line, 13, line.size() - 13);
        else
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (atof(number.c_str()) < 0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (number.find_first_not_of("0123456789 .") != std::string::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (atof(number.c_str()) > 2147483647)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }

        it = database_record.upper_bound(tm);
        it--;
        std::cout << line.substr(0, 10) << " => " << number << " = " << it->second * atof(number.c_str()) << std::endl;
    }
    return 0;
}