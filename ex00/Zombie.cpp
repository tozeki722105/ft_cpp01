#include "Zombie.hpp"

Zombie::Zombie(const std::string &new_name) : name(new_name) {}

Zombie::~Zombie()
{
	std::cout << this->name << ": is Stop" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
