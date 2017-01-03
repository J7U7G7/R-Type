#include "PlayerShip.hpp"

PlayerShip::PlayerShip() { }

PlayerShip::PlayerShip(int x, int y, int id) {
	setX(x);
	setY(y);
	setId(id);
}

PlayerShip::~PlayerShip() { }

void 	PlayerShip::setX(int _x) { this->x = _x; }

void 	PlayerShip::setY(int _y) { this->y = _y; }

void 	PlayerShip::setId(int _id) { this->id = _id; }

int 	PlayerShip::getX() { return (this->x); }

int 	PlayerShip::getY() { return (this->y); }

int 	PlayerShip::getId() { return (this->id); }


