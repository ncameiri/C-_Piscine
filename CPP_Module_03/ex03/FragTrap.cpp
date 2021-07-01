#include "FragTrap.hpp"
FragTrap::FragTrap(std::string Name): ClapTrap(Name){
	std::cout << "FragTrap Constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergy_points(100);
	this->setAttack_damage(30);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &to_copy): ClapTrap(" "){
	*this = to_copy;
    std::cout << "FragTrap Copy constructor called" << std::endl;
 }

FragTrap &FragTrap::operator =(FragTrap const &to_copy){
	this->Name = to_copy.Name;
    this->Hitpoints = to_copy.Hitpoints;
    this->Energy_points = to_copy.Energy_points;
    this->Attack_damage = to_copy.Attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys(void){
    std::cout<<this->Name<<" Gives a high fives to everybody!\n";
}


void FragTrap::attack(std::string const & target){
	std::cout<<"[FRAGTRAP CALL] ";
    std::cout<<"<"<<this->Name<<"> ";
    std::cout<<"attacks <"<<target;
    std::cout<<">, causing <";
    std::cout<<this->Attack_damage<<"> ";
    std::cout<<"points of damage!\n";
}