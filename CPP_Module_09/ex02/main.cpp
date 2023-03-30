#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <time.h>
#include <unistd.h>
#include <cstdlib>
#define __STDC_LIMIT_MACROS
#include <stdint.h>
#include <algorithm>
#include <sys/time.h>

// Usar vector https://cplusplus.com/reference/algorithm/sort/
// Usar list https://en.cppreference.com/w/cpp/container/list/sort

struct TimeStruct{
     struct timespec beg_cont1;
     struct timespec beg_cont2;
     struct timespec end_cont1;
     struct timespec end_cont2;
}_times;

bool check_input(char **argv)
{
    int i = 1;
    while (argv[i])
    {
        std::string temp = argv[i];
        if (temp.find_first_not_of("0123456789") != std::string::npos)
        {
            return true;
        }
        if (atof(argv[i]) > INT32_MAX || atof(argv[i]) < 0)
        {
            return true;
        }
        int z = i;

        // Check for repeated
        while (argv[++z])
        {
            if (atoi(argv[i]) == atoi(argv[z]))
            {
                return true;
            }
        }
        i++;
    }
    return false;
}

void print_result( void)
{ 
   //struct timespec begin = _times.end_cont1;
// int opt;
//std::string opt1 = "container 1" time elapsed etc...
   /*
    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;*/
}

void vector_func(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    std::vector<int> vect;
   
    clock_gettime(CLOCK_REALTIME, &_times.beg_cont1);
    for (int i = 1; i < argc; i++)
    {
        vect.push_back(atoi(argv[i]));
    }
    for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); ++it)
        std::cout << ' ' << *it;
    std::sort(vect.begin(), vect.end());
    std::cout << "\nAFTER sort\n";
    for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); ++it)
        std::cout << ' ' << *it;
    clock_gettime(CLOCK_REALTIME, &_times.end_cont1);
}

void list_func(int argc, char **argv)
{
    (void)argc;
    (void)argv;

   
    std::list<int> lis;
    clock_gettime(CLOCK_REALTIME, &_times.beg_cont2);
    for (int i = 1; i < argc; i++)
    {
        lis.push_back(atoi(argv[i]));
    }
    for (std::list<int>::iterator it = lis.begin(); it != lis.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << "\nAFTER sort\n";
    lis.sort();
    for (std::list<int>::iterator it = lis.begin(); it != lis.end(); ++it)
        std::cout << ' ' << *it;
    clock_gettime(CLOCK_REALTIME, &_times.end_cont1);


}
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    if (argc < 2 || argc > 3001 || check_input(argv))
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    // vector_func(argc, argv);
    list_func(argc, argv);

    /*struct timespec begin_cont1, end_cont1;
    clock_gettime(CLOCK_REALTIME, &begin_cont1);
    std::cout<<"";
     usleep(1);
   clock_gettime(CLOCK_REALTIME, &end_cont1);
   long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    //std::setw(10)<<
    std::cout<<std::fixed<<std::setprecision(10)<< elapsed<<"s "<<argv[0];*/
    return 0;
}