#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie(std::string new_name) : name(new_name) {};
	void announce(void);
	~Zombie();

private:
	std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif