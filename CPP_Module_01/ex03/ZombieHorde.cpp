#include "ZombieHorde.hpp"
ZombieHorde::ZombieHorde(int N)
{
    int i = 0;
    if (N < 0)
        N = 0;
    zomb = new Zombie*[N];
    i=-1;
    while(++i<N)
    {
       zomb[i]=new Zombie("ola","ola");
    }
    zombies_num = N;
}

ZombieHorde::~ZombieHorde()
{
}

int ZombieHorde::shownum()
{
    int i=-1;

   while(++i< this->zombies_num)
    this->zomb[i]->announce();
    return 1;
}