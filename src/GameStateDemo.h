#include "Game.h"
#include "StateManager.h"
#include "RunState.h"
#include "SplashState.h"

class GameStateDemo : public Game
{
private:
    StateManager manager;
    RunState runState;
    SplashState splashState;
public:
    GameStateDemo();
    ~GameStateDemo();
    bool init();
    void free();
    void update();
    void draw(Graphics* g);
};
