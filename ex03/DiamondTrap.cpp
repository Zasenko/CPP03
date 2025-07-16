#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(){
    std::cout << "DiamondTrap: Default constructor called" << std::endl;

    _name = "Unnamed";
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap: Constructor called (name: " << name << ")" << std::endl;

    _name = name;
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy._name + "_clap_name"), ScavTrap(copy._name + "_clap_name"), FragTrap(copy._name + "_clap_name")
{
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "DiamondTrap: Assignation operator called" << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
        ScavTrap::operator=(src);
        FragTrap::operator=(src);
        _name = src._name;
        _hit = src._hit;
        _energy = src._energy;
        _damage = src._damage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap: Deconstructor called (name: " << _name << ")" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}