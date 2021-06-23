#include "Zombie.hpp"

Zombie::Zombie(std::string z_name) : z_name(z_name)
{
    return;
}

Zombie::~Zombie()
{
    std::cout << "<" << this->z_name <<"> is beeing destroyed" << std::endl;
    return;
}

void Zombie::announce(){
    std::cout << "<" << this->z_name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}

