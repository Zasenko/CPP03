/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:35:42 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/07 14:35:44 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("no name"), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap: Constructor called (name: " << name << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    std::cout << "ClapTrap: Copy constructor called" << std::endl;

    *this = copy;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap: Deconstructor called (name: " << _name << ")" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap) {
    std::cout << "ClapTrap: Assignation operator called" << std::endl;

    if (this != &clapTrap) {
        _name = clapTrap._name;
        _hit = clapTrap._hit;
        _energy = clapTrap._energy;
        _damage = clapTrap._damage;
    }
    return *this;
}

// Когда ClapTrap атакует, он заставляет свою цель терять <attack damage> очков здоровья.

// Когда ClapTrap восстанавливает себя, он восстанавливает<amount> очков здоровья (hit points).Атака и ремонт каждый стоят 1 очко энергии.
void ClapTrap::attack(const std::string &target)
{
    if (_hit == 0) {
        std::cout << "ClapTrap " << _name << " can't attack " << target << "! He is dead" << std::endl;
    }
    else if (_energy == 0) {
        std::cout << "ClapTrap " << _name << " can't attack " << target << "! No energy points" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
        _energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (_hit == 0) {
        std::cout << "ClapTrap " << _name << " can't take damage! Hi is already dead" << std::endl;
    }
    else {
        _hit - static_cast<int>(amount) < 0 ? _hit = 0 : _hit -= static_cast<int>(amount);

        if (_hit == 0) {
            std::cout << "ClapTrap " << _name << " was attacked and lost all points! He is dead now" << std::endl;
        } else {
            std::cout << "ClapTrap " << _name << " was attacked and lost " << amount << " hit points! Hit points now: " << _hit << std::endl;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hit == 0) {
        std::cout << "ClapTrap " << _name << " can't repair itself! He is dead" << std::endl;
    }
    else if (_energy == 0) {
        std::cout << "ClapTrap " << _name << " can't repair itself! No energy points" << std::endl;
    }
    else {
        _hit + static_cast<int>(amount) > 10 ? _hit = 10 : _hit += static_cast<int>(amount);
        _energy--;
        std::cout << "ClapTrap " << _name << " repaired itself (+" << amount  << " hit points)! Hit points now: " << _hit << ", energy points now: " << _energy << std::endl;
    }
    
}
