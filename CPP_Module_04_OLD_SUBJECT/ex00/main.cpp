#include"Sorcerer.hpp"
#include"Victim.hpp"
#include"Peon.hpp"
int main()
{
Sorcerer robert("Robert", "the Magnificent");

Victim jim("Jimmy");
Peon joe("Joe");

std::cout << robert << jim << joe;

robert.polymorph(jim);
robert.polymorph(joe);

//Derived Classes

    Sorcerer copyS(robert);
	Victim	copyV(jim);
	Peon copyP(joe);
	std:: cout << copyS.getName() << std::endl;
	std:: cout << copyV.getName() << std::endl;
	std:: cout << copyP.getName() << std::endl;

return 0;
}


