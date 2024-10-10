#include "Zombie.hpp"

void announceHorde(Zombie *horde, int horde_num)
{
	if (!horde)
		return ;
	for (size_t i = 0; i < static_cast<size_t>(horde_num); i++)
		horde[i].announce();
}

int main()
{
	int horde_num = 5;
	Zombie *horde = zombieHorde(horde_num, "zombiee");
	announceHorde(horde, horde_num);
}