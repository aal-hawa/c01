#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
	std::cout << _name << ": I'm Human B..." << std::endl;

}

HumanB::~HumanB()
{
	std::cout << _name << ": Good Bye Human B..." << std::endl;

}
// void HumanB::setWeapon(Weapon weapon)
// {
// 	*_weapon = weapon;
// 	std::cout << _name << ": set new weapon..." << std::endl;

// }

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	std::cout << _name << ": set new weapon..." << std::endl;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " didnt attacks with weapon" << std::endl;
}