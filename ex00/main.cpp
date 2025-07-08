/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:35:51 by dzasenko          #+#    #+#             */
/*   Updated: 2025/07/07 14:35:53 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap test = ClapTrap("Dima");
    test.beRepaired(2);
    test.attack("Hello");
    test.beRepaired();
    test.takeDamage(1);
    return 0;
}
