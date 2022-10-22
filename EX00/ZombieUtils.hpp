#ifndef ZOMBIE_UTILS_HPP
# define ZOMBIE_UTILS_HPP

#include "Zombie.hpp"

class ZombieUtils {

public:

	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );

};

#endif
