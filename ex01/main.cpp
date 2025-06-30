#include "Zombie.hpp"

int main()
{
	Zombie* zombieObject = NULL;
	zombieObject = zombieObject->zombieHorde(1, "HeapZombie");
	if (zombieObject)
		delete zombieObject;
	return 0;
}