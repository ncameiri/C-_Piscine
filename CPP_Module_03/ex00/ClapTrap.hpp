#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include <iostream>
class ClapTrap
{
private:
    std::string Name;
    int Hitpoints;
    int Energy_points;
    int Attack_damage;
public:
    ClapTrap(std::string in_name);
    ~ClapTrap();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

class Player : public ClapTrap
{
private:
    /* data */
public:
    Player(std::string nam): ClapTrap(nam);
    ~Player();
};



#endif