#ifndef HUMAN_B
# define HUMAN_B

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:

	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB( std::string	name );
	~HumanB( void );

	void		attack( void );
	void		setWeapon( Weapon &weapon );
};

#endif

