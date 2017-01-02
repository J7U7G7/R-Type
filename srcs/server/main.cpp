#include "includes/main.hpp"
#include "includes/Server.hpp"
#include "includes/MonsterDynLibHandler.hpp"

int 		main() {
	Server 	server;

	server.run();

	//Chargement d'un monstre depuis une librairie dynamique
	
	MonsterDynLibHandler 	dynLibHandler;
	Monster 				TestMonstre1;
	Monster 				TestMonstre2;

	dynLibHandler.loadMonster("FireStingray", &TestMonstre1, true);
	dynLibHandler.loadMonster("GreenPanther", &TestMonstre2, true); 

	return (0);
}