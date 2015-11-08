#include "GameState.h"

GameState::GameState()
{
    manager = NULL;
}

void GameState::update()
{

}

void GameState::draw(Graphics* g)
{

}

StateManager* GameState::getManager()
{
    return manager;
}

void GameState::setManager(StateManager* m)
{
    manager = m;
}

