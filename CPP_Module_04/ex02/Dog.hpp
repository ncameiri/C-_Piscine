#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
private:
    Brain * brain;
public:
    Dog();
    ~Dog();
    Dog (Dog const &to_copy);
    //Dog (const Animal *to_copy);
    Dog & operator=(Dog const &to_copy);

    virtual void makeSound() const; 
};


#endif