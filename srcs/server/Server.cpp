#include "Server.hpp"

Server::Server() { 
	is_running = true;
	game_id = 0;
}

Server::~Server() { }


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

	newGameObject.setIndex(game_id);
	games.push_back(newGameObject);
	game_id++;
}

void 		Server::handleConnections() {


}


int		Server::run() {

	while (is_running) {
		
		if (allGamesFull())
			createNewGame();

		handleConnections();
	}
}