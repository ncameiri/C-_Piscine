#include "HumanA.hpp"
HumanA::HumanA(std::string in_name,Weapon& wep):name(in_name),Weapon(&wep)
{
    return;
}

HumanA::~HumanA()
{
    return;
}
