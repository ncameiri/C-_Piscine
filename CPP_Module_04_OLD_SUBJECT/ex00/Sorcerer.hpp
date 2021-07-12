#ifndef SORCERER_HPP
#define SORCERER_HPP
#include "Victim.hpp"
#include<iostream>
#include<string>
class Sorcerer
{
private:
    std::string Name;
    std::string Title;
public:
    Sorcerer(std::string in_name, std::string in_title);
    ~Sorcerer();

    Sorcerer(const Sorcerer &to_copy);
    Sorcerer & operator = (const Sorcerer &to_copy);

   void polymorph(Victim const & victim) const;

//GETTERS
    std::string getName() const;
    std::string getTitle() const;
//SETTERS


};
std::ostream & operator <<(std::ostream  & ost, Sorcerer const & elem);

#endif