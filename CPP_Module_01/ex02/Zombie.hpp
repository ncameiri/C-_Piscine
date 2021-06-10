#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP  
#include <iostream>
#include <string>

class Zombie
{
private:
    std::string z_type;
    std::string z_name;

public:
    Zombie(/* args */);
    ~Zombie();
    void announce();
    
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}

#endif