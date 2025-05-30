#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << _name << ": I'm Human A..." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << ": Good Bye Human A..." << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}