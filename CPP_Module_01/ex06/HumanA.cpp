#include "HumanA.hpp"
HumanA::HumanA(std::string in_name,Weapon& wep):name(in_name),weapon(wep)
{
    return;
}

HumanA::~HumanA()
{
    return;
}

void HumanA::attack(){
std::cout<<this->name<<" attacks with his"<<this->weapon<<std::endl;
}