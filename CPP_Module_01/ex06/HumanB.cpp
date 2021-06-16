#include "HumanB.hpp"
 HumanB::HumanB(std::string in_name,Weapon& wep):name(in_name),weapon(wep)
{
    return;
}

HumanB::~HumanB()
{
    return;
}

void HumanB::attack(){
std::cout<<this->name<<" attacks with his "<<this->weapon.getType()<<std::endl;
}