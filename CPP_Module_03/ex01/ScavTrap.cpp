#include "ScavTrap.hpp"
ScavTrap::ScavTrap(std::string Name): ClapTrap(Name){
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergy_points(50);
	this->setAttack_damage(20);
}

ScavTrap::~ScavTrap()  
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


void ScavTrap::guardGate(){
	std::cout << this->getName() <<" [ScavTrap] has been set to Gate Keeper mode!\n";   
}
