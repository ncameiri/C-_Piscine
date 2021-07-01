#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
         DiamondTrap(DiamondTrap const &to_copy);
   
   DiamondTrap & operator =(DiamondTrap const &to_copy);
   void attack(std::string const & target);
   void whoAmI();
};


#endif