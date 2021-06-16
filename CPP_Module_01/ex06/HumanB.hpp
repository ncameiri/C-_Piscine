#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "HumanA.hpp"
class HumanB
{
    private:
    std::string name;
    Weapon& weapon;
    public:
    HumanB(std::string in_name,Weapon& wep);
    ~HumanB();
    void attack();
};



#endif