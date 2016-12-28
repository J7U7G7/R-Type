#include "MonsterDynLibHandler.hpp"
#include "Monster.hpp"

MonsterDynLibHandler::MonsterDynLibHandler() { }

MonsterDynLibHandler::~MonsterDynLibHandler() { }


void 	MonsterDynLibHandler::loadMonster(string typeName, Monster* monster, bool printDebug) {

	this->libHandler = new AbstractLib("monster/" + typeName);

	cout << "Test 1" << endl;

	typedef string 	(*getType)();
	typedef int		(*getMaxHealth)();
	typedef int 	(*getDamage)();
	typedef int 	(*getPosX)();
	typedef int 	(*getPosY)();
	typedef float 	(*getFireRate)();
	typedef int 	(*getSpeed)();

	cout << "Test 2" << endl;

	monster->setType((*(libHandler->getSymLink<getType>("getType")))());
	cout << "Test 3" << endl;
	
	monster->setMaxHealth((*(libHandler->getSymLink<getMaxHealth>("getMaxHealth")))());
	monster->setDamage((*(libHandler->getSymLink<getDamage>("getDamage")))());
	monster->setPosX((*(libHandler->getSymLink<getPosX>("getPosX")))());
	monster->setPosY((*(libHandler->getSymLink<getPosY>("getPosY")))());
	monster->setFireRate((*(libHandler->getSymLink<getFireRate>("getFireRate")))());
	monster->setSpeed((*(libHandler->getSymLink<getSpeed>("getSpeed")))());

	cout << "Test 4" << endl;

	if (printDebug)
		this->printLoadedMonsterInfos(monster);
}

void		MonsterDynLibHandler::printLoadedMonsterInfos(Monster* monster) {

	cout << ">> New monster loaded ! <<" << endl
		 << " - Type: " << monster->getType() << endl
		 << " - MaxHealth: " << monster->getMaxHealth() << endl
		 << " - Damage: " << monster->getDamage() << endl
		 << " - X: " << monster->getPosX() << endl
		 << " - Y: " << monster->getPosY() << endl
		 << " - FireRate: " << monster->getFireRate() << endl
		 << " - Speed: " << monster->getSpeed() << endl << endl;
}