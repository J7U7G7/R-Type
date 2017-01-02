#include "EnnemyShip.hpp"

EnnemyShip::EnnemyShip() { }

EnnemyShip::EnnemyShip(int x, int y) { 
	setX(x);
	setY(y);
}

EnnemyShip::~EnnemyShip() { }

void 	EnnemyShip::setX(int _x) { this->x = _x; }

void 	EnnemyShip::setY(int _y) { this->y = _y; }

int 	EnnemyShip::getX() { return (this->x); }

int 	EnnemyShip::getY() { return (this->y); }

