#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "StateManager.h"
#include "Graphics.h"

class StateManager;

class GameState
{
private:
    StateManager* manager;
public:
    GameState();
    ~GameState(){};

    virtual void update();
    virtual void draw(Graphics* g);

    StateManager* getManager();
    void setManager(StateManager* m);
};

#endif
