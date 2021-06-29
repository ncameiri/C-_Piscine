#include "ScavTrap.hpp"
ScavTrap::ScavTrap(std::string Name): ClapTrap(Name){
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()  
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


void ScavTrap::guardGate(){
	std::cout << "ScavTrap in Gate Keeper mode\n";   
}
