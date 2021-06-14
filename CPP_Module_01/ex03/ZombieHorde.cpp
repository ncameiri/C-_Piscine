#include "ZombieHorde.hpp"

std::string	name_gen(void)
{
	char	*tab[] = {
		(char *)"Gulisa",
		(char *)"Aygul",
		(char *)"Laoise",
		(char *)"Casimir",
		(char *)"Patrick"
	};
	int random;
	random = (rand() % 5);
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
       
       zomb[i]=new Zombie("ola",name_gen());
    }
    zombies_num = N;
}

ZombieHorde::~ZombieHorde()
{
    //delete[] this;
}

int ZombieHorde::shownum()
{
    int i=-1;

   while(++i< this->zombies_num)
    this->zomb[i]->announce();
    return 1;
}