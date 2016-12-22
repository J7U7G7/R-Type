#ifndef		__MONSTERDYNLIBHANDLER_HPP__
# define	__MONSTERDYNLIBHANDLER_HPP__

#include "main.hpp"
#include "IDynLibHandler.hpp"
#include "Monster.hpp"

class MonsterDynLibHandler {

public:
	MonsterDynLibHandler();
	~MonsterDynLibHandler();

	void 			loadMonster(string, Monster*, bool);

private:
	void 				printLoadedMonsterInfos(Monster*);
	IDynLibHandler* 	libHandler;
};

#endif