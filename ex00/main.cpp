/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <dzasenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:35:51 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/22 13:21:43 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void test_copy_constr(const ClapTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Copy Constructor:" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    ClapTrap copy = ClapTrap(src);
    copy.attack("Ben");
}

void test_assignment_operator(const ClapTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Assignment Operator:" << std::endl;
    std::cout << "---------------------" << std::endl;

    ClapTrap assigned;
    assigned = src;
    assigned.attack("Anna");
}

void test_attack_repair(ClapTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST attack and repair:" << std::endl;
    std::cout << "---------------------" << std::endl;

    src.attack("David");
    src.takeDamage(5);
    src.beRepaired(1);
}

void test_energy_hit(ClapTrap &src)
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

int main(void)
{
    ClapTrap nick = ClapTrap("Nick");
    test_attack_repair(nick);
    test_copy_constr(nick);
    test_assignment_operator(nick);
    test_energy_hit(nick);
    std::cout << "---------------------" << std::endl;
    return 0;
}
