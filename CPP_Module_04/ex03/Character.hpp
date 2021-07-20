#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character: public ICharacter
{
private:
    std::string name;
    AMateria * inventory[4];
public:
    Character(std::string name_in);
    Character(const Character &ref);
    virtual ~Character();
};



#endif