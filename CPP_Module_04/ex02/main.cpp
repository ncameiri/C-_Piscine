#include"Dog.hpp"
#include"Cat.hpp"
#include "Animal.hpp"



int main()
{
    const Animal aa;
    const Animal *animal_array[10];
    const Animal * j=new Cat();

    delete j;
    for (int i=0;i<5;i++){
        animal_array[i] = new Dog();
    }
    for (int i=5;i<10;i++){
        animal_array[i] = new Cat();
    }

    for(int i=0;i<10;i++){
        delete animal_array[i];
    }

    /*const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound(); 
    delete meta;
    delete j;
    delete i;*/

   return 0;
}