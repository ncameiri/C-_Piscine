#include "Zombie.hpp"
#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
class ZombieHorde
{
private:
    int zombies_num;
    Zombie **zomb;
public:
    ZombieHorde(int N);
    ~ZombieHorde();
    int shownum();
};
#endif

