#ifndef VICTIM_HPP
#define VICTIM_HPP
#include "Sorcerer.hpp"

class Victim
{
private:
    std::string Name;
public:
    Victim(std::string in_name );
    ~Victim();
    

//GETTERS
 std::string getName() const;

 void getPolymorphed() const;
};
std::ostream & operator <<(std::ostream  & ost, Victim const & elem);



#endif
