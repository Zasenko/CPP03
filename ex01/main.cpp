/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <dzasenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:49:13 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/22 13:06:25 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void test_copy_constr(const ScavTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Copy Constructor:" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    ScavTrap copy = ScavTrap(src);
    copy.attack("Ben");
}

void test_assignment_operator(const ScavTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Assignment Operator" << std::endl;
    std::cout << "---------------------" << std::endl;

    ScavTrap assigned;
    assigned = src;
    assigned.attack("Anna");
}

void test_attack_repair(ScavTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST attack and repair:" << std::endl;
    std::cout << "---------------------" << std::endl;

    src.attack("David");
    src.takeDamage(5);
    src.beRepaired(1);
}

void test_energy_hit(ScavTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST energy and hit:" << std::endl;
    std::cout << "---------------------" << std::endl;

    for (int i = 0; i < 10; i++) {
        src.attack("Sara");
    }
    src.takeDamage(10);
    src.beRepaired(1);
}

void guardGate(ScavTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST guard gate:" << std::endl;
    std::cout << "---------------------" << std::endl;

    src.guardGate();
}


int main(void)
{
    ScavTrap nick = ScavTrap("Nick");
    test_attack_repair(nick);
    test_copy_constr(nick);
    test_assignment_operator(nick);
    test_energy_hit(nick);
    guardGate(nick);
    std::cout << "---------------------" << std::endl;
    return 0;
}
