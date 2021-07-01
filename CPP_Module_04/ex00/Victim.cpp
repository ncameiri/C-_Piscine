#include "Victim.hpp"
Victim::Victim(std::string in_name)
{
    this->Name = in_name;
    std::cout<<"Some Random victim"
    <<" called "<<this->Name<<" just appeared!\n";
}

Victim::~Victim()
{
     std::cout<<"Victim "<<this->Name
     <<" just died for no apparent reason!\n";
}

std::string Victim::getName() const{
    return(this->Name);
}

void Victim::getPolymorphed() const{
    std::cout<<this->Name<<" has been turned into a cute little sheep!\n";
}

std::ostream & operator <<( std::ostream & ost, Victim const & elem){
	ost <<"I'm "<<elem.getName()<<" and I like otters!\n";
	return ost;
}
