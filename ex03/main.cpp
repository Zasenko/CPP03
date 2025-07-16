#include "ScavTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(_LIBCPP___TYPE_TRAITS_VOID_T_H)
{
    std::cout << "\n--- Testing ClapTrap ---\n";
    ClapTrap ct("CT");
    ct.attack("Enemy");
    ct.beRepaired(5);
    ct.takeDamage(7);

    std::cout << "\n--- Testing ScavTrap ---\n";
    ScavTrap st("ST");
    st.attack("Enemy");
    st.guardGate();
    st.beRepaired(3);
    st.takeDamage(20);

    std::cout << "\n--- Testing FragTrap ---\n";
    FragTrap ft("FT");
    ft.attack("Enemy");
    ft.highFivesGuys();
    ft.beRepaired(8);
    ft.takeDamage(30);

    std::cout << "\n--- Testing DiamondTrap ---\n";
    DiamondTrap dt("DT");
    dt.attack("Enemy");
    dt.whoAmI();
    dt.beRepaired(4);
    dt.takeDamage(50);

    std::cout << "\n--- Testing array of ClapTraps pointers ---\n";
    ClapTrap *traps[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 4 == 0) {
            std::cout << "\n--- ClapTrap ---\n";
            traps[i] = new ClapTrap("CT_" + std::to_string(i));
        }
        else if (i % 4 == 1) {
            std::cout << "\n--- ScavTrap ---\n";
            traps[i] = new ScavTrap("ST_" + std::to_string(i));
        }
        else if (i % 4 == 2){
            std::cout << "\n--- FragTrap ---\n";
            traps[i] = new FragTrap("FT_" + std::to_string(i));
        }
        else {
            std::cout << "\n--- DiamondTrap ---\n";

            traps[i] = new DiamondTrap("DT_" + std::to_string(i));
        }
    }

    std::cout << "\n--- array of ClapTraps attacs: ---\n";
    for (int i = 0; i < 10; i++)
    {
        traps[i]->attack("EnemyArray");
    }


    std::cout << "\n--- Cleaning up array of ClapTraps ---\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << "\n--- delete " << i <<" ---\n";
        delete(traps[i]);
    }

    std::cout << "\n--- END ---\n";
    return 0;
}