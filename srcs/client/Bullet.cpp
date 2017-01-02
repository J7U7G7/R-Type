#include "Bullet.hpp"

Bullet::Bullet() { }

Bullet::Bullet(int x, int y) { 
	setX(x);
	setY(y);
}

Bullet::~Bullet() { }

void 	Bullet::setX(int _x) { this->x = _x; }

void 	Bullet::setY(int _y) { this->y = _y; }

int 	Bullet::getX() { return (this->x); }

int 	Bullet::getY() { return (this->y); }

