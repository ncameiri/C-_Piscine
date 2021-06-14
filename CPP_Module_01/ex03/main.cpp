#include "Zombie.hpp"
#include "ZombieHorde.hpp"
int main(){
     srand(time(0));
     ZombieHorde zombie_group(11);
     zombie_group.shownum();
}