#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "You have only positive number of zombies" << std::endl;
		return NULL;
	}
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