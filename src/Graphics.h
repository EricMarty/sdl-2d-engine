#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL/SDL.h>

class Graphics
{
private:
    SDL_Surface* backbuffer;
    int width;
    int height;
public:
    bool init(int aWidth, int aHeight, bool aFullscreen);
    void drawPixel(int x, int y, int r, int g, int b);
    void drawRect(int x, int y, int width, int height, int r, int g, int b);
    void fillRect(int x, int y, int width, int height, int r, int g, int b);
    void clear(int r, int g, int b);
    void flip();
    int getWidth();
    int getHeight();
    SDL_Surface* getBackbuffer();
};

#endif
