#include "HumanB.hpp"

void HumanB::attack()
{
	if (this->weapon == nullptr)
    	return;
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
	this->weapon = &wp;
}