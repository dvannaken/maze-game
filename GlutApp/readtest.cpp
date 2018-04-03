#include <iostream>
#include "Game.h"
#include "readtest.h"
using namespace std;

int main() {
	//Map *map = new Map("includes/map2.txt", 10);
	//map->print();
	//delete map;
	
	Game *game = new Game();
	game->print();
	delete game;
	
	//readtest();
	
	//system("PAUSE");
	return 0;
}