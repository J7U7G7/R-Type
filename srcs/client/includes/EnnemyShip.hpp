#ifndef __ENNEMYSHIP_HPP__
#define	__ENNEMYSHIP_HPP__

class EnnemyShip {

public:
	EnnemyShip();
	EnnemyShip(int, int);	
	~EnnemyShip();
	
	void 	setX(int);
	void	setY(int);
	int 	getX();
	int 	getY();

private:
	int 	x;
	int 	y;
};

#endif