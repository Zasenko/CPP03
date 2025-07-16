#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap: Default constructor called" << std::endl;

    _hit = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap: Constructor called (name: " << name << ")" << std::endl;

    _hit = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;

    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap: Assignation operator called" << std::endl;

    if (this != &src) {
        ClapTrap::operator=(src);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Deconstructor called (name: " << _name << ")" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << ": Do you want a high five?" << std::endl;
}
