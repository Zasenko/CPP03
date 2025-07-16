#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap(const std::string &name);
        virtual ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &src);
        virtual void attack(const std::string &target);
        void guardGate();
};

#endif