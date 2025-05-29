#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie zombieObject(name);
	zombieObject.announce();
}