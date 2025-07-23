/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:08:56 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/22 13:08:57 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), _name("Default")
{
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "DiamondTrap: Constructor called (name: " << name << ")" << std::endl;
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
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
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
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
