#include "Zombie.hpp"

int main()
{
	Zombie zombie("Foo");

	Zombie* newZombie = new Zombie("11111111");
	randomChump("kkkkkkkkkkkk");
	newZombie->announce();
	zombie.announce();
	delete newZombie;
}