#include "Graphics.h"

bool Graphics::init(int aWidth, int aHeight, bool aFullscreen)
{
    width = aWidth;
    height = aHeight;

    if(aFullscreen)
    {
        backbuffer = SDL_SetVideoMode(width, height, 32, SDL_SWSURFACE | SDL_FULLSCREEN);
    }
    else
    {
        backbuffer = SDL_SetVideoMode(width, height, 32, SDL_SWSURFACE);
    }

    if(backbuffer == NULL)
    {
        printf("Failed to initialize graphics!\n");
        return false;
    }

    return true;
}

void Graphics::drawPixel(int x, int y, int r, int g, int b)
{
    if(backbuffer == NULL)
        return;

    if(SDL_MUSTLOCK(backbuffer))
    {
        if(SDL_LockSurface(backbuffer) < 0)
            return;
    }

    if(x >= backbuffer->w || x < 0 || y >= backbuffer->h || y < 0)
        return;

    Uint32 *buffer;
    Uint32 color;

    color = SDL_MapRGB( backbuffer->format, r, g, b );

    buffer = (Uint32*)backbuffer->pixels  + y*backbuffer->pitch/4 + x;
    *buffer = color;

    if(SDL_MUSTLOCK(backbuffer))
            SDL_UnlockSurface(backbuffer);
}

void Graphics::drawRect(int x, int y, int width, int height, int r, int g, int b)
{
    fillRect(x, y, width, 1, r, g, b);
    fillRect(x, y+height-1, width, 1, r, g, b);
    fillRect(x, y, 1, height, r, g, b);
    fillRect(x+width-1, y, 1, height, r, g, b);
}

void Graphics::fillRect(int x, int y, int width, int height, int r, int g, int b)
{
    if(backbuffer == NULL)
        return;

    Uint32 color;

    color = SDL_MapRGB(backbuffer->format, r, g, b );

    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = width;
    rect.h = height;

    SDL_FillRect(backbuffer, &rect, color);
}

void Graphics::clear(int r, int g, int b)
{
    if(backbuffer == NULL)
        return;

    Uint32 color;

    color = SDL_MapRGB(backbuffer->format, r, g, b );

    SDL_FillRect(backbuffer, NULL, color);
}

int Graphics::getWidth()
{
    return width;
}

int Graphics::getHeight()
{
    return height;
}

SDL_Surface* Graphics::getBackbuffer()
{
    return backbuffer;
}

void Graphics::flip()
{
    SDL_Flip(backbuffer);
}
