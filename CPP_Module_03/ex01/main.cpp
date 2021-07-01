#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main() {

	ScavTrap hero("John");
	std::cout << "New Hero Created info:" << std::endl;
	std::cout << "Name:" <<hero.getName()<<" | " ;
	std::cout << "Hitpoints:" <<hero.getHitpoints() <<" | " ;
	std::cout << "Energy Points:" <<hero.getEnergy_points()<<" | " ;
	std::cout << "Attack Damage:" <<hero.getAttack_damage() << std::endl;
	hero.ClapTrap::attack("Monkey");
	hero.attack("Gorila");
	hero.guardGate();

	return 0;
}