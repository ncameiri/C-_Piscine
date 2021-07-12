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
    ~Animal();
    Animal(Animal const &to_copy);
    Animal & operator =(Animal const &to_copy);

    //MAKE SOUND
    void makeSound() const;
    std::string getType() const;
};



#endif