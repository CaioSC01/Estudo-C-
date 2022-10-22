#include "ZombieUtils.hpp"

int	main( void ) {
	ZombieUtils	utils;
	Zombie		*zombies;

	utils = ZombieUtils();
	zombies = utils.zombieHorde(9, "YEAh!");
	for (int i = 0; i < 9; i++)
	{
		std::cout << i + 1 << " ";
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
