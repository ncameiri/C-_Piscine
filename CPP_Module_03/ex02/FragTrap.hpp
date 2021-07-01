#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap(std::string Name);
    ~FragTrap();
    FragTrap(FragTrap const &to_copy);
    FragTrap & operator =(FragTrap const &to_copy);

     void attack(std::string const & target);
     void highFivesGuys(void);
};


#endif