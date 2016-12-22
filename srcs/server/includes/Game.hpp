#ifndef 	__CLIENT_HPP__
# define 	__CLIENT_HPP__

#include "main.hpp"

class Game {

	public:
	Game();
	~Game();

	void 			run();

	int 			index;

	private:
	list<Player> 	players;
	
};

#endif