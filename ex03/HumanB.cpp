#include "HumanB.hpp"

HumanB::HumanB(const std::string &n, Weapon *init_wp) : name(n), weapon(init_wp) {};

HumanB::~HumanB() {}

void HumanB::attack() const
{
	if (this->weapon == nullptr)
		return;
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
	this->weapon = &wp;
}