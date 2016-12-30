#include "includes/Game.hpp"
#include "includes/Server.hpp"

Game::Game(Server* server) : server(server) { 
	id += 1;
	std::cout << "New game created : " << getID() << std::endl;
	reference = NULL;
	//thread = NULL;
}

Game::~Game() { 
	std::cout << "Destroying Game : " << getID() << std::endl;
	//delete thread;
}

int		Game::player_add(Player* p)
{
	if (players.size() < MAX_PLAYERS)
	{
		if (reference == NULL)
			reference = p;
		players.push_back(p);

		return (players.size());
	}
		return (-1);
}

void 	Game::player_delete(Player* p)
{
	players.remove(p);
	if (players.size() == 0)
		delete this;
	if (reference == p)
		reference = players.front();
	std::cout << "Player disconnected" << std::endl;
}

int 	Game::getID() const {
	return (id);
}

void 	Game::run() {

}

Game::PlayerList& Game::getPlayers()
{
    return players;
}

Player*     Game::getReference() const
{
    return reference;
}