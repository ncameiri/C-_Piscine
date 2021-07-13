#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog: public Animal
{
private:
    /* data */
public:
    Dog(/* args */);
    ~Dog();
    Dog (Dog const &to_copy);
    Dog & operator=(Dog const &to_copy);
};


#endif