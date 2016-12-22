#include "Monster.hpp"

Monster::Monster() { 
	type = "";
	maxHealth = 0;
	currentHealth = 0;
	damage = 0;
	posX = 0;
	posY = 0;
	fireRate = 0.0f;
	speed = 0;
}

Monster::~Monster() { }

	// SETTERS

void 	Monster::setType(string _type) { type = _type; }

void 	Monster::setMaxHealth(int _maxHealth) {
	maxHealth = _maxHealth;
	currentHealth = maxHealth;
}

void 	Monster::setDamage(int _damage) { damage = _damage; }

void 	Monster::setPosX(int _posX) { posX = _posX; }

void 	Monster::setPosY(int _posY) { posY = _posY; }

void 	Monster::setFireRate(float _fireRate) { fireRate = _fireRate; }

void 	Monster::setSpeed(int _speed) { speed = _speed; }

	// GETTERS

string Monster::getType() const { return (this->type); }

int Monster::getMaxHealth() const { return (this->maxHealth); }

int Monster::getCurrentHealth() const { return (this->currentHealth); }

int Monster::getDamage() const { return (this->damage); }

int Monster::getPosX() const { return (this->posX); }

int Monster::getPosY() const { return (this->posY); }

float Monster::getFireRate() const { return (this->fireRate); }

int Monster::getSpeed() const { return (this->speed); }