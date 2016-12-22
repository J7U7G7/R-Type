#ifndef 	__MONSTERTEMPLATE_HPP__
# define 	__MONSTERTEMPLATE_HPP__

#include "main.hpp"

extern "C" {

	string 	getType();
	int 	getMaxHealth();
	int 	getDamage();
	int 	getPosX();
	int 	getPosY();
	float 	getFireRate();
	int 	getSpeed();
}

#endif