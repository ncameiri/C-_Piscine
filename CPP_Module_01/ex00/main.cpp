#include "Zombie.hpp"
//#include "ZombieHorde.hpp"
void randomChump(std::string name);
Zombie* newZombie (std::string name);
int main(){

    randomChump("Ze");
    
    Zombie *Luis;
    Luis = newZombie("LUIS");
    Luis->announce();
    delete Luis;
}