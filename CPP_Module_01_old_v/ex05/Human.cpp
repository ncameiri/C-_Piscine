#include "Human.hpp"
Human::Human(/* args */)
{
    //this->brain = new Brain::Brain;

    return;
}

Human::~Human()
{
    return;
}

std::string Human::identify() const{
    std::stringstream id;
    //id<<this->brain.identify();
    return this->brain.identify();
}
Brain const & Human::getBrain() const {
	return this->brain;
}

/*Brain Human::getBrain(){
    return (this.brain);
}*/
