#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <time.h>
#include <unistd.h>
#include <cstdlib>
#define __STDC_LIMIT_MACROS
#include <stdint.h>

//Usar vector https://cplusplus.com/reference/algorithm/sort/
//Usar list https://en.cppreference.com/w/cpp/container/list/sort

bool check_input(char **argv){
    int i=0;
    while(argv[++i]){
        std::string temp= argv[i];
        if(temp.find_first_not_of("0123456789") != std::string::npos){
            return true;
        }
        if(atof(argv[i]) > INT32_MAX || atof(argv[i]) < 0){
            return true;
        }
        int z=i;
        while(argv[++z]){
        if(atoi(argv[i]) == atoi(argv[z++])){
            return true;
            }
        }
    }
    return false;
}

int main(int argc, char **argv)
{
    
    if (argc < 2 || argc > 3001 || check_input(argv))
    {
        std::cout << "Error" << std::endl;
        return 1;
    }


    struct timespec begin, end; 
    clock_gettime(CLOCK_REALTIME, &begin);
    std::cout<<"";
     usleep(1);
   clock_gettime(CLOCK_REALTIME, &end);
   long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    //std::setw(10)<<
    std::cout<<std::fixed<<std::setprecision(10)<< elapsed<<"s "<<argv[0];
    return 0;
}