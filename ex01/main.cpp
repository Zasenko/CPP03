#include "ScavTrap.hpp"

int main(void) {
    ScavTrap alice("Alice");
    std::cout << "---------------\n";

    ScavTrap alice2(alice);
    alice2.guardGate();
    alice2.guardGate();
    alice2.guardGate();
    std::cout << "---------------\n";
    alice.guardGate();
    std::cout << "---------------\n";
    return 0;
}