#ifndef SORCERER_HPP
#define SORCERER_HPP
#include<iostream>
#include<string>
#include<cmath>
class Sorcerer
{
private:
    std::string Name;
    std::string Title;
public:
    Sorcerer(std::string in_name, std::string in_title);
    ~Sorcerer();

//GETTERS
    std::string getName() const;
    std::string getTitle() const;
//SETTERS


};
std::ostream & operator <<(std::ostream  & ost, Sorcerer const & elem);

#endif