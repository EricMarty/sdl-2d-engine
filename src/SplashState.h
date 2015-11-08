#ifndef SPLASH_STATE
#define SPLASH_STATE

#include "GameState.h"
#include "Graphics.h"
#include "Image.h"
#include "Input.h"
#include "Sound.h"

class SplashState : public GameState
{
private:
    Input* input;
    Image imageFrames;

    int imageFramesY;
    int imageFramesX;

public:
    bool init(Input* i, StateManager* m);
    void free();

    virtual void update();
    virtual void draw(Graphics* g);
};

#endif
