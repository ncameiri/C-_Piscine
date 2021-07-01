#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string in_name): Name(in_name),
    Hitpoints(10), Energy_points(10), Attack_damage(0){
    std::cout << "Constructor called" << std::endl;
}
/*ClapTrap::ClapTrap (std::string in_name, int opt): Name(in_name),
    Hitpoints(100), Energy_points(50), Attack_damage(20){
    std::cout << "Constructor called" << std::endl;
}*/

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
    if((int)(Hitpoints - amount) <= 0)
    {
         std::cout << "FR4G-TP " << this->Name << " Loose ALL Hitpoints \n";
	    
        this->Hitpoints = 0;
    }
    else
    {
        this->Hitpoints-=amount;
        std::cout << "FR4G-TP " << this->Name << " loose ";
	    std::cout << amount <<" hitpoints!"<< std::endl;
    }

}

 void ClapTrap::beRepaired(unsigned int amount){
    std::cout<<"beRepaired called\n";
    if(amount + Hitpoints >= 10 )
    {   
        this->Hitpoints = 10;
        std::cout << "FR4G-TP " << this->Name << " Hitpoints ";
	    std::cout << "Had been fully restored!"<< std::endl;
    }
    else
    {
        std::cout << "FR4G-TP " << this->Name << " recover ";
	    std::cout << amount << " Hitpoints!" << std::endl;
        this->Hitpoints +=amount;
    }
 }

 //GETTERS
std::string ClapTrap::getName()const{
    return(this->Name);
}

unsigned int ClapTrap::getHitpoints()const{
    return(this->Hitpoints);
}

unsigned int ClapTrap::getEnergy_points()const{
    return(this->Energy_points);
} 

unsigned int ClapTrap::getAttack_damage()const{
    return(this->Attack_damage);
}

//SETTERS
void ClapTrap::setName(std::string name){
    this->Name = name;
}

void ClapTrap::setHitpoints(unsigned int Hitp){
    this->Hitpoints = Hitp;
}

void ClapTrap::setEnergy_points(unsigned int Ene_pts){
    this->Energy_points = Ene_pts;
}

void ClapTrap::setAttack_damage(unsigned int Att_pts){
    this->Attack_damage = Att_pts;
}