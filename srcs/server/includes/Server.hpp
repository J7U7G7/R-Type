#ifndef 	__SERVER_HPP__
# define 	__SERVER_HPP__

#include "ISocket.hpp"
#include "Game.hpp"
//#include "Player.hpp"
#include <list>
#include <string>

class Server {

public:
	typedef	std::list<Player*> 		PlayerList;
	typedef std::list<Game*> 	GameList;

	Server(int port = SERVER_PORT);
	~Server();

	void 		run();
	void 		stop();
	Player* 	findPlayer(std::string& ip);
	PlayerList& getPlayers();
	
private:
	GameList 	games;
	PlayerList 	players;
	bool		is_running;
	int 		game_id;		// index des games, s'incrémente à chaque newGame
	ISocket 	*socket;
	Game* 		game;

	int			createNewGame();
	bool 		allGamesFull();
	void 		handleConnections();
};

#ifdef WIN32
    #include "Win_Socket.hpp"
#else
    #include "Unix_Socket.hpp"
#endif

#endif