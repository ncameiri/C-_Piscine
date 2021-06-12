#include "ZombieEvent.hpp"
ZombieEvent::ZombieEvent()
{
	return;
}

ZombieEvent::~ZombieEvent()
{
	return;
}
void	ZombieEvent::setZombieType(std::string type_to_set){
	this->z_type = type_to_set;
}

Zombie	*ZombieEvent::newZombie(std::string name){
	if (this->z_type.empty())
	{	
		std::cout << "enter zombie type: ";
		while (this->z_type.empty())
			std::getline(std::cin, this->z_type);
	}
	Zombie *newZombie = new Zombie(this->z_type,name);
	return newZombie;
}