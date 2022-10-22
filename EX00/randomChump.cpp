

#include "ZombieUtils.hpp"

void	ZombieUtils::randomChump( std::string name ) {
	Zombie zombie = Zombie(name);

	zombie.announce();
}
