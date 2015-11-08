#include "RunState.h"

bool RunState::init(Input* i, StateManager* m)
{
    input = i;
    setManager(m);

    if(!playerImage.load("graphics/run/people.png", 144, 144))
        return false;


    imageFrame = 0;
    frameCounter = 0;

    return true;
}

void RunState::free()
{
    playerImage.free();
}

void RunState::update()
{
    if(input->keyHit(SDLK_ESCAPE))
    {
        getManager()->popState();
    }

    frameCounter++;

    if(frameCounter > PLAYER_FRAMES)
    {
        frameCounter = 0;
        imageFrame++;

        if(imageFrame >= PLAYER_FRAMES)
            imageFrame = 0;
    }
}

void RunState::draw(Graphics* g)
{
    playerImage.draw(g->getWidth()/2 - playerImage.getFrameWidth()/2, g->getHeight()/2 - playerImage.getFrameHeight()/2, imageFrame + PLAYER_OFFSET, g);
}

