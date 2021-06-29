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

    void guardGate();
};


#endif