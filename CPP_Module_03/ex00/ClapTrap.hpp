#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include <iostream>
class ClapTrap
{
private:
    std::string Name;
    unsigned int Hitpoints;
    unsigned int Energy_points;
    unsigned int Attack_damage;
public:
    ClapTrap(std::string in_name);
    ClapTrap( ClapTrap const &to_copy);
    ~ClapTrap();
    //ClapTrap & operator =(ClapTrap const &to_copy);


    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif