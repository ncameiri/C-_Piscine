#include "Zombie.hpp"
#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
class ZombieEvent
{
private:
   std::string z_type;
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type_to_set);
    Zombie* newZombie(std::string name);
 };


#endif