#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main() {

	FragTrap Hero("John");
	Hero.ClapTrap::attack("Monkey");
	Hero.attack("Gorila");
	Hero.highFivesGuys();
return 0;
}