#ifndef 	__PLAYER_HPP__
# define 	__PLAYER_HPP____

#include <string>
#include "ISocket.hpp"

class Game;

class Player
{
public:
	Player(Game* game, std::string ip);
	~Player();
	void		send(std::string data); // send data to graphic terminal
	void		recv(std::string& data); // callback on data receive
    std::string      getIp() const;

private:
	int 		id_player;
	Game*		game;
	ISocket*	socket;
	std::string		ip;
};

#endif