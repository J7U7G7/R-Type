//#include "includes/Player.hpp"
#include "includes/Game.hpp"
#include "includes/Server.hpp"
#include <stdio.h>

Player::Player(Game* game, std::string ip) : game(game), ip(ip)
{
	socket = new AbstractSocket(ip, CLIENT_PORT);
    id_player = game->player_add(this);
}

Player::~Player()
{
	delete socket;
}

std::string      Player::getIp() const
{
    return ip;
}

void		Player::send(std::string data)
{
	socket->send(data, ip, CLIENT_PORT);
}

void        Player::recv(std::string& data)
{
    if (data == "game")
        std::cout << "Numero de la game : " << game->getID() << "\n" << std::endl;
    else if (data == "ip")
        std::cout << "Votre adresse ip est : " << getIp() << std::endl;
}