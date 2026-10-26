#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
#define DBG_NEW new (_NORMAL_BLOCK, __FILE__, __LINE__)
#else
#define DBG_NEW new
#endif

#include <SFML/Graphics.hpp>
// #include "Player.h"
// #include "Enemy.h"
// #include "Bullet.h"
#include <math.h>
#include <vector>
#include "Game.h"
#include <iostream>

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    {
        Game game;
        game.Initialize();
        game.RunLoop();

        game.Shutdown();
    }

    return 0;
}

// https://www.sfml-dev.org/documentation/2.6.0/classf_1_1RectangleShape.php