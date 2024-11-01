#include "Zombie.hpp"

void randomChump(const std::string &name)
{
	Zombie *newZombie = new Zombie(name);
	newZombie->announce();
	delete newZombie;
}
