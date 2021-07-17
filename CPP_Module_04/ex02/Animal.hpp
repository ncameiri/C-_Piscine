#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
protected:
    std::string type;
    Animal();
    Animal(std::string type_set);
public:
    virtual ~Animal();
    Animal(Animal const &to_copy);
    Animal & operator =(Animal const &to_copy);

    //MAKE SOUND
    virtual void makeSound() const;
    std::string getType() const;
};



#endif