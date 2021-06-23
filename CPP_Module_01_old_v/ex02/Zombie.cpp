#include "Zombie.hpp"

Zombie::Zombie(std::string z_type, std::string z_name) : z_type(z_type), z_name(z_name)
{
    return;
}

Zombie::~Zombie()
{
    return;
}

void Zombie::announce(){
    std::cout << "<" << this->z_name << " (" << this->z_type << ")> Braiiiiiiinnnssss..." << std::endl;
}