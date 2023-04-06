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

std::vector<int> merge_vector(std::vector<int> left, std::vector<int> right)
{
    std::vector<int> return_vect(left.size() + right.size());
    //Don't work with iterators
    //Merge by Ascending order
    unsigned int i = 0,l = 0, r = 0;
    while (l < left.size() && r < right.size())
    {
        if (left[l] < right[r])
        {
            return_vect[i] = left[l++];

        }
        else
        {
            return_vect[i] = right[r++];
        }
        i++;
    }
      while (l  < left.size() )
            {
                return_vect[i++] = left[l++];
            }
      while (r  < right.size()  )
            {
                return_vect[i++] = right[r++];
            }
    return return_vect;
}

std::vector<int> merge_sorting_vector(std::vector<int> full_vector)
{
    if (full_vector.size() < 2){
        return full_vector;
    }
    std::vector<int>::iterator begin_it = full_vector.begin();
    std::vector<int>::iterator end_it = full_vector.end();
    int middle_point = full_vector.size() / 2;
    std::vector<int> left(begin_it, begin_it + middle_point);
    std::vector<int> right(begin_it + middle_point, end_it);
    return merge_vector(merge_sorting_vector(left), merge_sorting_vector(right));
}

std::list<int> merge_list(std::list<int> left, std::list<int> right)
{
    std::list<int> return_list;
    std::list<int>::iterator left_it = left.begin();
    std::list<int>::iterator right_it = right.begin();
    //Merge by Ascending order
    while (left_it != left.end() && right_it != right.end())
    {
        if (*left_it < *right_it)
        {
            return_list.push_back(*left_it);
            left_it++;

        }
        else
        {
            return_list.push_back(*right_it);
            right_it++;
            }

    }
      while (left_it  != left.end() )
            {
                return_list.push_back(*left_it);
                left_it++;
            }
      while (right_it  != right.end()  )
            {
               return_list.push_back(*right_it);
                right_it++;
            }
    return return_list;
}

std::list<int> merge_sorting_list(std::list<int> full_list)
{
    if (full_list.size() < 2){
        return full_list;
    }
    std::list<int>::iterator begin_it = full_list.begin();
    std::list<int>::iterator end_it = full_list.end();
    std::list<int>::iterator middle_it = full_list.begin();
    int middle_point = full_list.size() / 2;
    std::advance(middle_it, middle_point);
    std::list<int> left(begin_it, middle_it);
    std::list<int> right(middle_it, end_it);
    return merge_list(merge_sorting_list(left), merge_sorting_list(right));
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
    bool added_aux_el = false;
    clock_gettime(CLOCK_REALTIME, &_times.beg_cont1);
    for (int i = 1; i < argc; i++)
    {
        vect.push_back(atoi(argv[i]));
    }
    if (vect.size() % 2 != 0){
        vect.insert(vect.begin(), -1);
        added_aux_el = true;
    }
    std::vector<int> res = merge_sorting_vector(vect);
    if(added_aux_el)
        res.erase(res.begin());
    clock_gettime(CLOCK_REALTIME, &_times.end_cont1);
    // Print after Sort Without spending time
    std::cout << "\nAfter:  ";
    for (std::vector<int>::iterator it = res.begin(); it != res.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << std::endl;
}

void list_func(int argc, char **argv)
{

    std::list<int> lis;
    bool added_aux_el = false;
    clock_gettime(CLOCK_REALTIME, &_times.beg_cont2);
    for (int i = 1; i < argc; i++)
    {
        lis.push_back(atoi(argv[i]));
    }
    if (lis.size() % 2 != 0){
        lis.push_front(-1);
        added_aux_el = true;
    
    }
    std::list<int> res = merge_sorting_list(lis);
    if (added_aux_el)
        res.erase(res.begin());
    clock_gettime(CLOCK_REALTIME, &_times.end_cont2);
    //                             |  |
    //                             |  |
    //Uncomment to see sorted list V  V
    // std::cout << "\nAft_L:  ";
    // for (std::list<int>::iterator it = res.begin(); it != res.end(); ++it)
    //     std::cout << ' ' << *it;
}
int main(int argc, char **argv)
{

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