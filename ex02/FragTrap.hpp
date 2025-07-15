#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &src);
        ~FragTrap(); //virtual??
        void attack(const std::string &target);
        void guardGate();
        void highFivesGuys(void);
    private:
        bool _mode;
};

#endif
