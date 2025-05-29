#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie* zombieHordeObject = NULL;
	Zombie* firstZombieHordeObject = NULL;
	for(int i = 0; i < N; i++)
	{
		zombieHordeObject =  new Zombie(name);
		if (!zombieHordeObject)
			return firstZombieHordeObject;
		zombieHordeObject->announce();
		if (i == 0)
			firstZombieHordeObject = zombieHordeObject;
		else
			delete zombieHordeObject;
	}
	return firstZombieHordeObject;
}