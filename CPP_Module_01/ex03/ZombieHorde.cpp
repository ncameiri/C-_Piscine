#include "ZombieHorde.hpp"

std::string	name_gen(void)
{
	char	*tab[] = {
		(char *)"Gulisa",
		(char *)"Aygul",
		(char *)"Laoise",
		(char *)"Casimir",
		(char *)"Patrick",
        (char *)"Ze",
        (char *)"Manel",
        (char *)"Luisa",
        (char *)"Vitor"
	};
	int random;
	random = (rand() % 9);
	return((std::string) tab[random]);
}

ZombieHorde::ZombieHorde(int N)
{
    int i = 0;
    if (N < 0)
        N = 0;
    zomb = new Zombie*[N];
    i=-1;
    while(++i<N)
    {       
       zomb[i]=new Zombie("HordeZombie",name_gen());
    }
    zombies_num = N;
}

ZombieHorde::~ZombieHorde()
{   
    int i=-1;

    while(++i<this->zombies_num)
        delete zomb[i];
    delete[] zomb;
}

void ZombieHorde::announce()
{
    int i=-1;

   while(++i< this->zombies_num)
    this->zomb[i]->announce();

}