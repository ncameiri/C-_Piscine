#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
// https://www.youtube.com/watch?v=oz3f-ms-AJs
// https://github.com/aorji/42-CPP-pool/blob/master/d03/ex00/FragTrap.cpp
int main() {
	/*ClapTrap hero("Nakayama");
    std::cout << "attack:" << std::endl;
	hero.attack("Chewbacca");
	hero.takeDamage(5);   
	hero.takeDamage(5);
    hero.beRepaired(1);
	hero.beRepaired(9);*/
	ScavTrap Hero("John");
	Hero.guardGate();
return 0;
}