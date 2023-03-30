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

//Usar vector https://cplusplus.com/reference/algorithm/sort/
//Usar list https://en.cppreference.com/w/cpp/container/list/sort

bool check_input(char **argv){
    int i=1;
    while(argv[i]){
        std::string temp= argv[i];
        if(temp.find_first_not_of("0123456789") != std::string::npos){
            return true;
        }
        if(atof(argv[i]) > INT32_MAX || atof(argv[i]) < 0){
            return true;
        }
        int z=i;

        // Check for repeated
        while(argv[++z]){
        if(atoi(argv[i]) == atoi(argv[z])){
            return true;
            }
        }
        i++;
    }
    return false;
}

void print_result(void){
    
}

void vector_func(int argc, char **argv){
    (void)argc;
    (void)argv;
    
    std::vector<int> vect;
    struct timespec begin, end; 
    clock_gettime(CLOCK_REALTIME, &begin);
    for(int i = 1; i < argc ; i++){
        vect.push_back(atoi(argv[i]));
    }
    for (std::vector<int>::iterator it=vect.begin(); it!=vect.end(); ++it)
    std::cout << ' ' << *it;
    std::sort (vect.begin(), vect.end());
    std::cout<<"\nAFTER sort\n";
       for (std::vector<int>::iterator it=vect.begin(); it!=vect.end(); ++it)
    std::cout << ' ' << *it;
   clock_gettime(CLOCK_REALTIME, &end);
}

/*void list_func(int argc, char **argv){

}*/
int main(int argc, char **argv)
{
     (void)argc;
    (void)argv;
    if (argc < 2 || argc > 3001 || check_input(argv))
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    vector_func(argc,argv);
    /*struct timespec begin_cont1, end_cont1; 
    clock_gettime(CLOCK_REALTIME, &begin_cont1);
    std::cout<<"";
     usleep(1);
   clock_gettime(CLOCK_REALTIME, &end_cont1);
   long seconds = end_cont1.tv_sec - begin_cont1.tv_sec;
    long nanoseconds = end_cont1.tv_nsec - begin_cont1.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    //std::setw(10)<<
    std::cout<<std::fixed<<std::setprecision(10)<< elapsed<<"s "<<argv[0];*/
    return 0;
}