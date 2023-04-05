#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stdint.h>
#include <algorithm>
// https://www.geeksforgeeks.org/merge-sort/

struct TimeStruct
{
    struct timespec beg_cont1;
    struct timespec beg_cont2;
    struct timespec end_cont1;
    struct timespec end_cont2;
} _times;


 std::vector<int> merge_vector(std::vector<int> left, std::vector<int> right){
    if(*left.begin() > *right.begin()){
        right.insert(right.end(),left.begin(), left.end());
        return right;
    }
    else {
         left.insert(left.end(),right.begin(), right.end());
        return left;
    }
 }



 std::list<int> merge_list(std::list<int> left, std::list<int> right){
    if(*left.begin() > *right.begin()){
        right.merge(left);
        return right;
    }
    else {
        left.merge(right);
        return left;
    }
 }

std::vector<int> merge_sorting_vector(std::vector<int> full_vector)
{
    std::vector<int>::iterator begin_it = full_vector.begin();
    std::vector<int>::iterator end_it = full_vector.end();
    std::vector<int>::iterator middle_it = full_vector.begin();
   
    int middle_point = full_vector.size() / 2;
    std::advance(middle_it, middle_point);
    std::vector<int> left(begin_it, middle_it);
    std::vector<int> right(middle_it, end_it);

    if(left.size() < 2 || right.size() < 2)
        return merge_vector(left,right);
    return merge_vector(merge_sorting_vector(left),merge_sorting_vector(right));
}

std::list<int> merge_sorting_list(std::list<int> full_list)
{
    std::list<int>::iterator begin_it = full_list.begin();
    std::list<int>::iterator end_it = full_list.end();
    std::list<int>::iterator middle_it = full_list.begin();
   
    int middle_point = full_list.size() / 2;
    std::advance(middle_it, middle_point);
    std::list<int> left(begin_it, middle_it);
    std::list<int> right(middle_it, end_it);

    if(left.size() < 2 || right.size() < 2)
        return merge_list(left,right);
    return merge_list(merge_sorting_list(left),merge_sorting_list(right));
}


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
    // Print after Sort Without spending time
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
    merge_sorting_list(lis);
    clock_gettime(CLOCK_REALTIME, &_times.end_cont2);
}
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    if (argc < 2 || check_input(argv))
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