#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie() {};
	Zombie(std::string new_name);
	~Zombie();
	void announce(void);

private:
	std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif