#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
class Character: public ICharacter
{
private:
    int max_inventory;
    std::string name;
    AMateria * inventory[4];
public:
    Character(std::string name_in);
    Character(const Character &to_copy);
    Character   &operator=(const Character &to_copy);
    virtual ~Character();


    const std::string	&getName(void) const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif