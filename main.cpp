#include "settings.h"
#include "game.h"
#include "meteor.h"
#include "Bullet.h"
#include "Textobj.h"
using namespace sf;
int main()
{
	srand(time(nullptr));

	Game game;
	game.play();


	return 0;
}