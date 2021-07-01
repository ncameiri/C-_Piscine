#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(std::string Name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &to_copy);
    ScavTrap & operator =(ScavTrap const &to_copy);

    void guardGate();

    void attack(std::string const & target);

};


#endif