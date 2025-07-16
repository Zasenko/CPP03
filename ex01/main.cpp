#include "ScavTrap.hpp"

int main(void) {
    ScavTrap alice("Pedro");
    std::cout << "---------------\n";
    ClapTrap dima("Dima");
    std::cout << "---------------\n";

    // ScavTrap alice2(alice);
    // alice2.guardGate();
    // alice2.guardGate();
    // alice2.guardGate();
    // std::cout << "---------------\n";
    // alice.guardGate();
    // std::cout << "---------------\n";

    ClapTrap &t1 = dima;
    std::cout << "---------------\n";

    ScavTrap &t2 = alice;

    std::cout << "---------------\n";

    t1.attack("(ClapTrap ClapTrap)");

    std::cout << "---------------\n";

    t2.attack("(ClapTrap ScavTrap)");

    std::cout << "---------------\n";
    std::cout << "---------------\n";
    std::cout << "---------------\n";
    std::cout << "---------------\n";
    return 0;
}