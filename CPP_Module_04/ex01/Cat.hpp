#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
private:
    Brain * brain;
public:
    Cat(/* args */);
    ~Cat();
     Cat (Cat const &to_copy);
    Cat & operator=(Cat const &to_copy);

    virtual void makeSound()const;
};


#endif