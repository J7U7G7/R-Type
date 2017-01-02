#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "main.hpp"
#include "NetworkManager.hpp"

#include "Bullet.hpp"
#include "EnnemyShip.hpp"
#include "PlayerShip.hpp"


class Client {

public:
	Client();
	~Client();
	int		run();

	private:
<<<<<<< HEAD
	int 	connectionToServer(sf::RenderWindow *);
	int 	play(sf::RenderWindow *);
	void 	catchKeyboardInputs();
	int 	fillCatalog();
	int     drawObject(sf::RenderWindow *, int, int, int, float, float, int, int, int);
=======
	int 			connectgame(sf::RenderWindow *);
	int 			connectionToServer(sf::RenderWindow *);
	int 			play(sf::RenderWindow *);
>>>>>>> 84b37499c5fda474eb21ec03dae8aaf48a0e4aa9

	void 	renderPlayers(sf::RenderWindow *);
	void 	renderBullets(sf::RenderWindow *);
	void 	renderEnnemyShips(sf::RenderWindow *);

	NetworkManager  	network;
    sf::Font   			font;
    vector<sf::Texture> catalog;
    vector<PlayerShip> 	player_list;
    vector<Bullet> 		bullet_list;
    vector<EnnemyShip> 	ennemy_list;
};

#endif