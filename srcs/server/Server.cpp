#include "includes/Server.hpp"
#include <iostream>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
//#include "includes/Player.hpp"
#include "includes/Game.hpp"

Server::Server(int port) : is_running(false) { 

	socket = new AbstractSocket(port);
	game_id = 0;
	game = NULL;
}

Server::~Server() { 
	delete socket;
}

Player*     Server::findPlayer(std::string& ip)
{
    PlayerList::iterator pl, plEnd = players.end();
	for (pl = players.begin(); pl != plEnd; ++pl)
	{
		if ((*pl)->getIp() == ip)
            return (*pl);
	}

    return (NULL);
}

Server::PlayerList& Server::getPlayers()
{
    return players;
}

/*
// retourne true si toutes les games crées sont pleines (== 4 joueurs)
bool 		Server::allGamesFull() {

	if (games.empty())
		return (true);

	for (int i = 0; i < games.size(); i++) {
		if (games[i].players.size() != 4)
			return (false);
	}
	return (true);
}

// On crée un objet Game, on set le game_id et on l'ajoute à la liste.
int			Server::createNewGame() {

	Game 	newGameObject;

	newGameObject->index = game_id;
	games.push_back(newGameObject);
	game_id++;
}

void 		Server::handleConnections() {


}
*/

void 		Server::stop() {
	is_running = false;
}
void		Server::run() {

	std::string ip;
	std::string buff;
	Player* p;

	std::cout << "Welcome to R-Type Game !" << std::endl;
	std::cout << "Waiting for players ...\n" << std::endl;
	is_running = true;
	while ((is_running == true))
	{
		buff = socket->recv(100, &ip);
        if ((p = findPlayer(ip)))
        {
            p->recv(buff);
        }
        else if (p == 0)
        {
            std::cout << "New client\n" << ip << std::endl;
            if (!game)
                game = new Game(this);
            if (game->getPlayers().size() >= MAX_PLAYERS)
            {
                game = new Game(this);
            }
            std::cout << "Added to the game numero : " << game->getID() << "\n\n" << std::endl;
            p = new Player(game, ip);
			players.push_back(p);
        }
	}
}