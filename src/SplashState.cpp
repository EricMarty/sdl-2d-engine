#include "SplashState.h"

bool SplashState::init(Input* i, StateManager* m)
{
    input = i;
    setManager(m);

    imageFramesX = 0;
    imageFramesY = 0;

    if(!imageFrames.load("graphics/splash/player.png"))
        return false;

    return true;
}

void SplashState::free()
{
	imageFrames.free();
}

void SplashState::update()
{
    if(input->keyHit(SDLK_SPACE) || input->keyHit(SDLK_ESCAPE) || input->keyHit(SDLK_RETURN))
    {
        getManager()->popState();
    }
}

void SplashState::draw(Graphics* g)
{
    //logoImage.draw(g->getWidth()/2 - logoImage.getWidth()/2, logoImageY, g);
	//imageFrames.draw(imageFramesX, imageFramesY, g);
}
