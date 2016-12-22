#ifndef 	__GAME_HPP__
# define 	__GAME_HPP__

#include "main.hpp"
#include "Player.hpp"

class Game {

public:
	Game();
	~Game();

	void 			run();
	vector<Player> 	players;

	void 			setIndex(int);
	int 			getIndex();

private:
	int 			index;
};

#endif