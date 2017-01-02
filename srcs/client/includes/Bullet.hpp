#ifndef __BULLET_HPP__
#define	__BULLET_HPP__

class Bullet {

public:
	Bullet();
	Bullet(int, int);
	~Bullet();
	
	void 	setX(int);
	void	setY(int);
	int 	getX();
	int 	getY();

private:
	int 	x;
	int 	y;
};

#endif