#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include <iostream>
class ICharacter;
#include "AMateria.hpp"

//Abstract Class 
//Using pure virtual functions 
class ICharacter
{
public:
    //Sem constructor
    virtual ~ICharacter(){};
    // Pure virtual function = 0
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};



#endif