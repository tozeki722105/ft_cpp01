#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string n, Weapon &init_wp) : name(n), weapon(init_wp) {}
	void attack();
	
	private:
	std::string name;
	Weapon &weapon;
};

#endif