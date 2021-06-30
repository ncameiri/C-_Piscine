#include"ClapTrap.hpp"
// https://www.youtube.com/watch?v=oz3f-ms-AJs
// https://github.com/aorji/42-CPP-pool/blob/master/d03/ex00/FragTrap.cpp
int main() {
	ClapTrap hero("Nakayama");
	std::cout << "New Hero Created info:" << std::endl;
	std::cout << "Name:" <<hero.getName()<<" | " ;
	std::cout << "Hitpoints:" <<hero.getHitpoints() <<" | " ;
	std::cout << "Energy Points:" <<hero.getEnergy_points()<<" | " ;
	std::cout << "Attack Damage:" <<hero.getAttack_damage() << std::endl;
	hero.attack("Chewbacca");
	hero.takeDamage(5);   
	hero.takeDamage(5);
    hero.beRepaired(1);
	hero.beRepaired(9);
return 0;
}