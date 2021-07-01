#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
protected:
    std::string Name;
    unsigned int Hitpoints;
    unsigned int Energy_points;
    unsigned int Attack_damage;
public:
    ClapTrap(std::string in_name);
    //ClapTrap(std::string in_name, int opt);
    ClapTrap(ClapTrap const &to_copy);
    ~ClapTrap();
    ClapTrap & operator =(ClapTrap const &to_copy);


    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    //GETTERS
    std::string getName()const;
    unsigned int getHitpoints()const;
    unsigned int getEnergy_points()const;
    unsigned int getAttack_damage()const;
    
    //SETTERS
    void setName(std::string name);
    void setHitpoints(unsigned int Hitp);
    void setEnergy_points(unsigned int Ene_pts);
    void setAttack_damage(unsigned int Att_pts);
};

#endif