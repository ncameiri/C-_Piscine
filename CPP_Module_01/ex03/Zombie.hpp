#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP  
#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
private:
    std::string z_type;
    std::string z_name;

public:
    Zombie(std::string z_type, std::string z_name);
    ~Zombie();
    void announce();
    
};

#endif