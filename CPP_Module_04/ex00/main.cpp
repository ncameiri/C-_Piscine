#include"Dog.hpp"
#include"Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound(); 
    delete meta;
    delete j;
    delete i;


    std::cout << "\nTESTS WITH WORNG CLASSES" << std::endl;
    const WrongAnimal* k = new WrongCat();
    k->makeSound();
    delete k;
   
   return 0;
}