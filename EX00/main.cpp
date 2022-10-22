#include "Zombie.hpp"
#include "ZombieUtils.hpp"

int	main( void ) {
	ZombieUtils utils = ZombieUtils();
	Zombie*	zombiePtr = utils.newZombie("Zombie-Caio");
	zombiePtr->announce();
	utils.randomChump("Zombie-Julia");
	delete zombiePtr;
	return (0);
}