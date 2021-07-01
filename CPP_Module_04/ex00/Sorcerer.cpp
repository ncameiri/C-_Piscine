#include"Sorcerer.hpp"
Sorcerer::Sorcerer(std::string in_name, std::string in_title)
{
    this->Name = in_name;
    this->Title = in_title;
    std::cout<< this->Name << ", "<<this->Title<<", is born!\n";
}

Sorcerer::~Sorcerer()
{
    std::cout<< this->Name << ", "<<this->Title<<
    ", is dead. Consequences will never be the same!\n";
}

std::string Sorcerer::getName() const{
    return(this->Name);
}

std::string Sorcerer::getTitle() const{
    return(this->Title);
}

std::ostream & operator <<( std::ostream & ost, Sorcerer const & elem){
	ost <<"I am "<<elem.getName()<<", "<<elem.getTitle()<<", and I like ponies!\n";
	return ost;
}