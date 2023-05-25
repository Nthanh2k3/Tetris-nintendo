#include"sfx.hpp"
#include<fstream>
#include<SDL_mixer.h>
#include<iostream>

BackgroundMusic::BackgroundMusic() {
    music = nullptr;
    SDL_Init(SDL_INIT_AUDIO);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
}
BackgroundMusic::~BackgroundMusic() {
    Mix_FreeMusic(music);
}

bool BackgroundMusic::loadMusic(const std::string& filePath) {
    music = Mix_LoadMUS(filePath.c_str());
    if (music == nullptr) {
        std::cerr << "Failed to load music: " << filePath << std::endl;
        return false;
    }
    return true;
}

void BackgroundMusic::playLoop() {
    Mix_PlayMusic(music, -1);
}
