#include "GameStateDemo.h"

int main(int argc, char *argv[])
{
    GameStateDemo game;

    if(!game.init())
        game.free();

    game.run();

    return 0;
}
