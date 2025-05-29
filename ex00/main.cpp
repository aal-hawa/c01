#include "Zombie.hpp"

int main()
{
	Zombie* zombieObject = NULL;
	zombieObject = zombieObject->newZombie("HeapZombie");
	zombieObject->announce();
	delete zombieObject;
	
	zombieObject->randomChump("StackZombie");
	return 0;
}