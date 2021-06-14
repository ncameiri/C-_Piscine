#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(){
     srand(time(0));
     ZombieHorde zombie_group(7);
     zombie_group.announce();
     std::cout<<"HORDE 2\n";
     ZombieHorde zombie_group2(7);
     zombie_group.announce();
}