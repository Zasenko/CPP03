#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(), _mode(false)
{
    std::cout << "FragTrap: Default constructor called" << std::endl;

    _hit = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name), _mode(false)
{
    std::cout << "FragTrap: Constructor called (name: " << name << ")" << std::endl;

    _hit = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) {
    std::cout << "FragTrap: Copy constructor called" << std::endl;

    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    if (this != &src) {
        ClapTrap::operator=(src);
        _mode = src._mode;
    }
    return *this;
}

FragTrap::~FragTrap()
{

}

void FragTrap::attack(const std::string &target)
{
    if (_hit == 0)
    {
        std::cout << "FragTrap " << _name << " can't attack " << target << "! He is dead" << std::endl;
    }
    else if (_energy == 0)
    {
        std::cout << "FragTrap " << _name << " can't attack " << target << "! No energy points" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
        _energy--;
    }
}

void FragTrap::guardGate()
{
    // if dead?
    if (!_mode)
    {
        std::cout << "FragTrap: " << _name << " is in Gate keeper mode now" << std::endl;
        _mode = true;
    }
    else
    {
        std::cout << "FragTrap: " << _name << " is already in Gate keeper mode" << std::endl;
    }
}

void FragTrap::highFivesGuys(void) {
    // if dead?
    std::cout << "FragTrap " << _name << ": Do you want a high five?" << std::endl;
}
