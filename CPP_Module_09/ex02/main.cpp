#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stdint.h>
#include <algorithm>

struct TimeStruct
{
    struct timespec beg_cont1;
    struct timespec beg_cont2;
    struct timespec end_cont1;
    struct timespec end_cont2;
} _times;

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

void print_result(int opt, int argc)
{
    struct timespec begin = _times.beg_cont1;
    struct timespec end = _times.end_cont1;
    std::string cont_opt = "std::vector";
    if (opt == 1)
    {
        begin = _times.beg_cont2;
        end = _times.end_cont2;
        cont_opt = "std::list  ";
    }

    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds * 1e-9;
    std::cout << "Time to process a range of " << std::setw(4) << argc - 1 << " elements with "
              << cont_opt << " : " << std::fixed << elapsed << "s" << std::endl;
}

void vector_func(int argc, char **argv)
{
    std::vector<int> vect;
    clock_gettime(CLOCK_REALTIME, &_times.beg_cont1);
    for (int i = 1; i < argc; i++)
    {
        vect.push_back(atoi(argv[i]));
    }
    std::sort(vect.begin(), vect.end());
    clock_gettime(CLOCK_REALTIME, &_times.end_cont1);
    //Print after Sort Without spending time
    std::cout << "\nAfter:  ";
    for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << std::endl;
}

void list_func(int argc, char **argv)
{

    std::list<int> lis;
    clock_gettime(CLOCK_REALTIME, &_times.beg_cont2);
    for (int i = 1; i < argc; i++)
    {
        lis.push_back(atoi(argv[i]));
    }
    lis.sort();
    clock_gettime(CLOCK_REALTIME, &_times.end_cont2);
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
    std::cout << "Before: ";
    for (int i = 1; i < argc; i++)
    {
        std::cout << " " << argv[i];
    }
    list_func(argc, argv);
    vector_func(argc, argv);
    print_result(1, argc);
    print_result(0, argc);

    return 0;
}