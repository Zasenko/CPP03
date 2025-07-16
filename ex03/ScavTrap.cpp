#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap: Default constructor called" << std::endl;

    _hit = 100;
    _energy = 50;
    _damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap: Constructor called (name: " << name << ")" << std::endl;

    _hit = 100;
    _energy = 50;
    _damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap: Copy constructor called" << std::endl;

    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Deconstructor called (name: " << _name << ")" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap: Assignation operator called" << std::endl;

    if (this != &src) {
        ClapTrap::operator=(src);
    }
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "[ScavTrap::attack called]" << std::endl;
    if (_hit == 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack " << target << "! He is dead" << std::endl;
    }
    else if (_energy == 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack " << target << "! No energy points" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
        _energy--;
    }
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap: " << _name << " is in Gate keeper mode now" << std::endl;
}