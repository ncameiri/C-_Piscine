#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string in_name): Name(in_name),
    Hitpoints(10), Energy_points(10), Attack_damage(0){
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const &to_copy){
    *this = to_copy;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap (){
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator =(ClapTrap const &to_copy){
    this->Name = to_copy.Name;
    this->Hitpoints = to_copy.Hitpoints;
    this->Energy_points = to_copy.Energy_points;
    this->Attack_damage = to_copy.Attack_damage;
    return (*this);
}

void ClapTrap::attack(std::string const & target){
    std::cout<<"FR4G-TP ";
    std::cout<<"<"<<this->Name<<"> ";
    std::cout<<"attacks <"<<target;
    std::cout<<">, causing <";
    std::cout<<this->Attack_damage<<"> ";
    std::cout<<"points of damage!\n";

}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout<<"takeDamage called\n";
    if(Energy_points - amount <= 0)
    this->Attack_damage += amount;
}

 void ClapTrap::beRepaired(unsigned int amount){
    std::cout<<"beRepaired called\n";
    if(amount + Energy_points >= 10 )
        this->Energy_points = 10;
    else
        this->Energy_points +=amount;
 }