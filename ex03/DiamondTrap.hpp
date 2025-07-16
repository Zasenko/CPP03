#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        DiamondTrap();
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator=(const DiamondTrap &src);
        virtual ~DiamondTrap();
        void whoAmI();
        virtual void attack(const std::string &target);
    private:
        std::string _name;
};

#endif