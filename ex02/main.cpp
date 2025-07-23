/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <dzasenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:05:05 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/22 13:22:11 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void test_copy_constr(const FragTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Copy Constructor:" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    FragTrap copy = FragTrap(src);
    copy.attack("Ben");
}

void test_assignment_operator(const FragTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Assignment Operator:" << std::endl;
    std::cout << "---------------------" << std::endl;

    FragTrap assigned;
    assigned = src;
    assigned.attack("Anna");
}

void test_attack_repair(FragTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST attack and repair:" << std::endl;
    std::cout << "---------------------" << std::endl;

    src.attack("David");
    src.takeDamage(5);
    src.beRepaired(1);
}

void test_energy_hit(FragTrap &src)
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

void test_highFivesGuys(FragTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST high Fives Guys:" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    src.highFivesGuys();
}


int main(void)
{
    FragTrap nick = FragTrap("Nick");
    test_attack_repair(nick);
    test_copy_constr(nick);
    test_assignment_operator(nick);
    test_energy_hit(nick);
    test_highFivesGuys(nick);
    std::cout << "---------------------" << std::endl;
    return 0;
}
