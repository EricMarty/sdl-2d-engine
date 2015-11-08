#include "GameStateDemo.h"

GameStateDemo::GameStateDemo()
{

}

GameStateDemo::~GameStateDemo()
{

}

bool GameStateDemo::init()
{
    if(!initSystem("Game State Demo", 748, 720, false))
        return false;

    if(!runState.init(getInput(), &manager))
        return false;

    if(!splashState.init(getInput(), &manager))
        return false;

    manager.addState(&runState);
    manager.addState(&splashState);

    return true;
}

void GameStateDemo::free()
{
    runState.free();
    splashState.free();
}

void GameStateDemo::update()
{
    if(manager.isEmpty())
    {
        end();
        return;
    }

    manager.update();
}

void GameStateDemo::draw(Graphics* g)
{
    manager.draw(g);
}
