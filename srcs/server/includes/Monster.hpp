#ifndef		__MONSTER_HPP__
# define	__MONSTER_HPP__

#include "main.hpp"

class Monster {

public:
	Monster();
	~Monster();

	string 	getType() const;
	int 	getMaxHealth() const;
	int 	getCurrentHealth() const;
	int 	getDamage() const;
	int 	getPosX() const;
	int 	getPosY() const;
	float 	getFireRate() const;
	int 	getSpeed() const;

	void	setType(string);
	void 	setMaxHealth(int);
	void 	setDamage(int);
	void 	setPosX(int);
	void 	setPosY(int);
	void 	setFireRate(float);	
	void 	setSpeed(int);

private:
	string 	type;
	int		maxHealth;
	int 	currentHealth;
	int 	damage;
	int 	posX;
	int 	posY;
	float 	fireRate;
	int		speed;
};

#endif