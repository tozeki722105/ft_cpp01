#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
	Weapon(std::string t) : type(t) {}
	const std::string &getType();
	void setType(std::string str);

	private:
	std::string type;
};

#endif