#ifndef __PLAYERSHIP_HPP__
#define	__PLAYERSHIP_HPP__

class PlayerShip {

public:
	PlayerShip();
	PlayerShip(int, int, int);	
	~PlayerShip();
	
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