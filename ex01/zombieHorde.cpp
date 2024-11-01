#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name)
{
	if (N < 0)
		return (nullptr);
	Zombie* horde = new Zombie[N];
	for (size_t i = 0; i < static_cast<size_t>(N); i++)
		horde[i] = Zombie(name);
	return (horde);
}
