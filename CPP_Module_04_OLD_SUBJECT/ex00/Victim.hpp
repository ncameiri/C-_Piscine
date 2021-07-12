#ifndef VICTIM_HPP
#define VICTIM_HPP
#include<iostream>
#include<string>

class Victim
{
private:
    std::string Name;
public:
    Victim(std::string in_name );
    ~Victim();
    
    Victim(const Victim &to_copy);
    Victim & operator = (const Victim &to_copy);

//GETTERS
 std::string getName() const;

 void getPolymorphed() const;
};
std::ostream & operator <<(std::ostream  & ost, Victim const & elem);



#endif
