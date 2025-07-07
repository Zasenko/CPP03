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

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {}

ClapTrap::ClapTrap(const ClapTrap &copy) {

}

ClapTrap::~ClapTrap() {}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap) {
    if (this != &clapTrap) {
        _name = clapTrap._name;
        _energy = clapTrap._hit;
        _energy = clapTrap._energy;
        _damage = clapTrap._damage;
    }
    return *this;
}
