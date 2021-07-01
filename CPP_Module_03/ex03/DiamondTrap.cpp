#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(std::string name):Name(name),FragTrap(name),ScavTrap(name)
{
     std::cout << "Diamond Trap Constructor called" << std::endl;
    this->setName(name + "_clap_name");
    this->setHitpoints(100);
    this->setEnergy_points(50);
    this->setAttack_damage(30);
}

DiamondTrap::~DiamondTrap()
{
     std::cout << "Diamond Trap Destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target){
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){ 
    std::cout << "Hello my Diamond Trap name is: "<<this->Name
    <<" and my Clap Trap name is: "<<this->getName()<<"!"<< std::endl;
}