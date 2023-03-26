#include <stack>
#include <iostream>
#include <sstream>
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    std::string numbs_string = argv[1];
    if (numbs_string.find_first_not_of("0123456789 +-*/") != std::string::npos)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::stack<int> numbs;
    std::stack<char> op;
    std::stringstream ss;
    ss << numbs_string;
    while (!ss.eof())
    {
        std::string temp;
        ss >> temp;
        if (temp.find_first_not_of("0123456789") == std::string::npos)
        {
            std::cout << "e numer" << std::endl;
        }
        if (temp.find_first_not_of("+-/*") == std::string::npos)
        {
            std::cout << "e opera" << std::endl;
        }
        std::cout << temp << std::endl;
    }
    return 0;
}