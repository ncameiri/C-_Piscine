#include "Array.hpp"

#define MAX_VAL 5
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
   
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = (rand() % 200);
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    
         Array<int> tmp = numbers;
        Array<int> test(tmp);    

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        std::cout<<"try acess to index -2"<<std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout<<"try acess to index MAX_VAL ( wrong)"<<std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"For to show all elems of array:"<<std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout<<numbers[i]<<std::endl;
    }
    

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout<<"Teste for length getter\nlen: "<<numbers.size()<<std::endl;

    delete [] mirror;//
    return 0;
}