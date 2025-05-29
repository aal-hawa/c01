#include "Zombie.hpp"

Zombie* Zombie::newZombie ( std::string name )
{
	Zombie* zombieObject = new Zombie(name);
	return zombieObject;
}
