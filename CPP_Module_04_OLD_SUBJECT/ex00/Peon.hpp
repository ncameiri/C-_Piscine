#ifndef PEON_HPP
#define PEON_HPP
#include "Sorcerer.hpp"
#include "Victim.hpp"
class Peon : public Victim
{
private:
    /* data */
public:
    Peon(std::string name);
    ~Peon();

    void getPolymorphed() const;
};



#endif