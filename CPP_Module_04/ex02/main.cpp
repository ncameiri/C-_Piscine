#include"Dog.hpp"
#include"Cat.hpp"
#include "Animal.hpp"


int main()
{
    //Animal f=Animal();
    //Animal j= Dog();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
}