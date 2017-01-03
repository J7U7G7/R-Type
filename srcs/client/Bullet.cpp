#include "Bullet.hpp"

Bullet::Bullet() { }

Bullet::Bullet(int x, int y, int id) { 
	setX(x);
	setY(y);
	setId(id);
}

Bullet::~Bullet() { }

void 	Bullet::setX(int _x) { this->x = _x; }

void 	Bullet::setY(int _y) { this->y = _y; }

void 	Bullet::setId(int _id) { this->id = _id; }

int 	Bullet::getX() { return (this->x); }

int 	Bullet::getY() { return (this->y); }

int 	Bullet::getId() { return (this->id); }


