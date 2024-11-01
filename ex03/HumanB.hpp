#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string &n, Weapon *init_wp = nullptr);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &wp);

private:
	std::string name;
	Weapon     *weapon;
};

#endif