#include "StateManager.h"

void StateManager::addState(GameState* s)
{
    s->setManager(this);
    states.push(s);
}

void StateManager::popState()
{
    states.pop();
}

void StateManager::update()
{
    if(!states.empty())
    {
        if(states.top() != NULL)
        {
            states.top()->update();
        }
    }
}

void StateManager::draw(Graphics* g)
{
    if(!states.empty())
    {
        if(states.top() != NULL)
        {
            states.top()->draw(g);
        }
    }
}

bool StateManager::isEmpty()
{
    return states.empty();
}
