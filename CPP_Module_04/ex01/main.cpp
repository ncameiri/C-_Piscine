#include"Dog.hpp"
#include"Cat.hpp"
#include "Animal.hpp"



int main()
{
    const Animal* animal_array[10];

    //const Animal * j=new Cat();

    //delete j;
    for (int i=0;i<5;i++){
        animal_array[i] = new Dog();
    }
    for (int i=5;i<10;i++){
        animal_array[i] = new Cat();
    }

    for(int i=0;i<10;i++){
        delete animal_array[i];
    }


    std::cout<< "\nTESTE Deep Copy\n";
    Dog *k = new Dog();
    const Animal* j = new Dog(*k);

    delete k;
    delete j;

   return 0;
}