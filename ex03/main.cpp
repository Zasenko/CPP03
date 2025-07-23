/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <dzasenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:09:59 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/22 13:20:57 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void test_construction_and_copy(DiamondTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Copy Constructor:" << std::endl;
    std::cout << "---------------------" << std::endl;

    DiamondTrap copy = DiamondTrap(src);
    copy.whoAmI();
    copy.attack("EvilClone");
}

void test_assignment_operator(DiamondTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST Assignment Operator:" << std::endl;
    std::cout << "---------------------" << std::endl;

    DiamondTrap assigned;
    assigned = src;
    assigned.attack("AssignedEnemy");
    assigned.whoAmI();
}

void test_inheritance(DiamondTrap &src)
{
    std::cout << "---------------------" << std::endl;
    std::cout << "TEST combat inheritance:" << std::endl;
    std::cout << "---------------------" << std::endl;

    src.attack("Lora");
    src.takeDamage(60);
    src.beRepaired(30);
    src.whoAmI();
    src.highFivesGuys();
    src.guardGate();
}

int main()
{
    DiamondTrap ben("Ben");
    test_construction_and_copy(ben);
    test_assignment_operator(ben);
    test_inheritance(ben);
    std::cout << "---------------------" << std::endl;
    return 0;
}
