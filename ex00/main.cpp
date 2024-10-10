#include "Zombie.hpp"

int main()
{
	Zombie zombie("Foo");

	Zombie * new_zombie = newZombie("11111111");
	randomChump("kkkkkkkkkkkk");
	new_zombie->announce();
	zombie.announce();
	delete new_zombie;
}