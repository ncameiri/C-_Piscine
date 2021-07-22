#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type_set);
    virtual ~Animal();
    Animal( const Animal &to_copy);
    Animal & operator =(Animal const &to_copy);

    //MAKE SOUND
    virtual void makeSound() const;
    std::string getType() const;
};



#endif