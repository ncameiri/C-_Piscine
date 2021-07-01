#include "ScavTrap.hpp"
ScavTrap::ScavTrap(std::string Name): ClapTrap(Name){
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergy_points(50);
	this->setAttack_damage(20);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &to_copy): ClapTrap(" "){
	*this = to_copy;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
 }

ScavTrap &ScavTrap::operator =(ScavTrap const &to_copy){
	this->Name = to_copy.Name;
    this->Hitpoints = to_copy.Hitpoints;
    this->Energy_points = to_copy.Energy_points;
    this->Attack_damage = to_copy.Attack_damage;
    return (*this);
}

void ScavTrap::guardGate(){
	std::cout << this->getName() <<" [ScavTrap] had been set to Gate Keeper mode!\n";   
}

void ScavTrap::attack(std::string const & target){
	 std::cout<<"SC4V-TP ";
    std::cout<<"<"<<this->Name<<"> ";
    std::cout<<"attacks <"<<target;
    std::cout<<">, causing <";
    std::cout<<this->Attack_damage<<"> ";
    std::cout<<"points of damage!\n";
}