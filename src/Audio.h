#ifndef AUDIO_H
#define AUDIO_H

#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>

class Audio
{
private:
public:
    bool init();
    void kill();

    bool musicPlaying();
    bool musicPaused();
    void pauseMusic();
    void resumeMusic();
    void stopMusic();

    void stopChannel(int channel);
};

#endif
