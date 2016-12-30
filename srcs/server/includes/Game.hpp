#ifndef 	__GAME_HPP__
# define 	__GAME_HPP__

#include <string>
#include "Player.hpp"
#include <list>
#include "Server.hpp"

#define MAX_PLAYERS 4

class Server;

class Game {

public:
	typedef std::list<Player*> PlayerList;

	Game(Server *server);
	~Game();

	void 			run();
	int 			player_add(Player*);
	void 			player_delete(Player*);
	int 			getID() const;
	Player* 		getReference() const;
	PlayerList& 	getPlayers();
	int 			index;

	private:
	PlayerList 		players;
	Server* 		server;
	Player* 		reference;
	int 			id;
	//Ithread* 		thread;
};

#endif