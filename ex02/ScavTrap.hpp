#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap(const std::string &name);
        ~ScavTrap(); // virtual ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &src);
        void attack(const std::string &target);
        void guardGate();
    private:
        bool _mode;
};

#endif