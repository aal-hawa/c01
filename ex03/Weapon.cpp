#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	_name = name;
	std::cout << _name << ": Hi in ex03..." << std::endl;
}

Weapon::~Weapon()
{
	std::cout << _name << ": See you in ex04..." << std::endl;
}

void Weapon::setType(std::string name)
{
	_name = name;
	std::cout << _name << ": set new tybe weapon..." << std::endl;

}
std::string Weapon::getType()
{
	return (_name);
}