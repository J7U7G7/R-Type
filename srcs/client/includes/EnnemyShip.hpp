#ifndef __ENNEMYSHIP_HPP__
#define	__ENNEMYSHIP_HPP__

class EnnemyShip {

public:
	EnnemyShip();
	EnnemyShip(int, int, int);	
	~EnnemyShip();
	
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