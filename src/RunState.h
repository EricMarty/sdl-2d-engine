#ifndef RUN_STATE
#define RUN_STATE

#include "GameState.h"
#include "Graphics.h"
#include "Image.h"
#include "Input.h"

class RunState : public GameState
{
private:
    Input* input;
    Image playerImage;

    static const int PLAYER_FRAMES = 4;
    static const int PLAYER_OFFSET = 0;

    int imageFrame;
    int frameCounter;
public:
    bool init(Input* i, StateManager* m);
    void free();

    virtual void update();
    virtual void draw(Graphics* g);
};

#endif

