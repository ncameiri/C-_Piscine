#include "Zombie.hpp"
#include "ZombieEvent.hpp"
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
	srand(time(0));
	random = (rand() % 5);
	return((std::string) tab[random]);
}

void		randomChump()
{
	Zombie random= Zombie("Stack_zombie",name_gen());
	random.announce();
}

int main(){
	ZombieEvent zombie;
    
	//Zombie Created on the Heap
	zombie.setZombieType("Heap_zombie");
	Zombie *zmb = zombie.newZombie("Drop");
	zmb->announce();
	delete zmb;

	//Zombie Created on the Stack
	randomChump();

	//Zombie by evaluator
	while(1){
		std::string type_;
		std::cout<<"Please input type of Zombie or EXIT"<<std::endl;
		std::getline(std::cin, type_);
		if(type_ == "EXIT")
			return 1;
		zombie.setZombieType(type_);
		std::cout<<"Please input Name of Zombie"<<std::endl;
		std::getline(std::cin, type_);
		Zombie *zmb = zombie.newZombie(type_);
		zmb->announce();
		delete zmb;
	}
	return 1;
}