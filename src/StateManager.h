#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <stack>
#include "GameState.h"
#include "Graphics.h"

class GameState;

class StateManager
{
private:
    std::stack<GameState*> states;
public:
    StateManager(){};
    ~StateManager(){};

    void addState(GameState* s);
    void popState();
    void update();
    void draw(Graphics* g);
    bool isEmpty();
};

#endif
