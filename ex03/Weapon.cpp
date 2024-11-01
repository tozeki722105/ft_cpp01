#include "Weapon.hpp"

Weapon::Weapon(const std::string &t) : type(t) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(const std::string &str)
{
	this->type = str;
}