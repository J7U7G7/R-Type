#include "EnnemyShip.hpp"

EnnemyShip::EnnemyShip() { }

EnnemyShip::EnnemyShip(int x, int y, int id) { 
	setX(x);
	setY(y);
	setId(id);
}

EnnemyShip::~EnnemyShip() { }

void 	EnnemyShip::setX(int _x) { this->x = _x; }

void 	EnnemyShip::setY(int _y) { this->y = _y; }

void 	EnnemyShip::setId(int _id) { this->id = _id; }

int 	EnnemyShip::getX() { return (this->x); }

int 	EnnemyShip::getY() { return (this->y); }

int 	EnnemyShip::getId() { return (this->id); }


