#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(const std::string &n, Weapon &init_wp);
	void attack() const;

private:
	std::string name;
	Weapon     &weapon;
};

#endif