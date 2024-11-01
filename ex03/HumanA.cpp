#include "HumanA.hpp"

HumanA::HumanA(const std::string &n, Weapon &init_wp) : name(n), weapon(init_wp) {}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
