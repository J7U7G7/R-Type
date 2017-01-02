#ifndef __PLAYERSHIP_HPP__
#define	__PLAYERSHIP_HPP__

class PlayerShip {

public:
	PlayerShip();
	PlayerShip(int, int);	
	~PlayerShip();
	
	void 	setX(int);
	void	setY(int);
	int 	getX();
	int 	getY();

private:
	int 	x;
	int 	y;
};

#endif