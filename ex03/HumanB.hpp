#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string n) : name(n), weapon(nullptr) {};
	HumanB(Weapon *init_wp) : weapon(init_wp) {};
	void attack();
	void setWeapon(Weapon &wp);
	
	private:
	std::string name;
	Weapon *weapon;
};

#endif