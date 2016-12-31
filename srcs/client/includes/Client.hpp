#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "main.hpp"
#include "NetworkManager.hpp"

class Client {

public:
	Client();
	~Client();
	int		run();

	private:
	int 			connectionToServer(sf::RenderWindow *);

	NetworkManager  network;
};

#endif