#ifndef 	__SERVER_HPP__
# define 	__SERVER_HPP__

#include "main.hpp"

class Server {

	public:
	Server();
	~Server();

	int 		run();
	
	private:
	list<Game>	games;
	bool		is_running;
	int 		game_id;	// index des games, s'incrémente à chaque newGame

	int			createNewGame();
	bool 		allGamesFull();
	void 		handleConnections();
};

#endif