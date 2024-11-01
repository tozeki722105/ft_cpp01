#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
public:
	Weapon(const std::string &t);
	~Weapon();
	const std::string &getType();
	void               setType(const std::string &str);

private:
	std::string type;
};

#endif