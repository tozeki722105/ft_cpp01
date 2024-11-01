#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie(const std::string &new_name);
	~Zombie();
	void announce(void) const;

private:
	std::string name;
};

Zombie *newZombie(const std::string &name);
void    randomChump(const std::string &name);

#endif