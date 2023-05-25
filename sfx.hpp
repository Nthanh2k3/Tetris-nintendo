#pragma once
#include <SDL.h>
#include <SDL_mixer.h>
#include <string>

class BackgroundMusic {
public:
    BackgroundMusic();
    ~BackgroundMusic();

    bool loadMusic(const std::string& filePath);
    void playLoop();


private:
    Mix_Music* music;

};


