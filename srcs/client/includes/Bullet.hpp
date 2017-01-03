#ifndef __BULLET_HPP__
#define	__BULLET_HPP__

class Bullet {

public:
	Bullet();
	Bullet(int, int, int);
	~Bullet();
	
	void 	setX(int);
	void	setY(int);
	void 	setId(int);
	int 	getX();
	int 	getY();
	int 	getId();

private:
	int 	x;
	int 	y;
	int 	id;
};

#endif