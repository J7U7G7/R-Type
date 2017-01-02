#include "PlayerShip.hpp"

PlayerShip::PlayerShip() { }

PlayerShip::PlayerShip(int x, int y) { 
	setX(x);
	setY(y);
}

PlayerShip::~PlayerShip() { }

void 	PlayerShip::setX(int _x) { this->x = _x; }

void 	PlayerShip::setY(int _y) { this->y = _y; }

int 	PlayerShip::getX() { return (this->x); }

int 	PlayerShip::getY() { return (this->y); }

