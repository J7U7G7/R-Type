#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include <thread>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "main.hpp"
#include "NetworkManager.hpp"
#include "Bullet.hpp"
#include "EnnemyShip.hpp"
#include "PlayerShip.hpp"
#include "MSGParser.hpp"

class Client {

public:
	Client();
	~Client();
	int		run();

	private:
	int 	connectionToServer(sf::RenderWindow *);
	// int 	connectGame(sf::RenderWindow *);
	int 	play(sf::RenderWindow *);
	void 	catchKeyboardInputs();
	int 	fillCatalog();
	int     drawObject(sf::RenderWindow *, int, int, int, float, float, int, int, int);
	void	networkLoop();
	void 	renderPlayers(sf::RenderWindow *);
	void 	renderBullets(sf::RenderWindow *);
	void 	renderEnnemyShips(sf::RenderWindow *);

	NetworkManager  	network;
    sf::Font   			font;
    vector<sf::Texture> catalog;
    vector<PlayerShip> 	player_list;
    vector<Bullet> 		bullet_list;
    vector<EnnemyShip> 	ennemy_list;
    std::thread 		thread;
    bool				networkLoop_running;
};

#endif