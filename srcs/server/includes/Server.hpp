#ifndef 	__SERVER_HPP__
# define 	__SERVER_HPP__

#include "main.hpp"
#include "Game.hpp"

class Server {

public:
	Server();
	~Server();

	int 		run();
	vector<Game>	games;
	
private:
	bool			is_running;
	int 			game_id;	// index des games, s'incrémente à chaque newGame

	int		createNewGame();
	bool 	allGamesFull();
	void 	handleConnections();
};

#endif