#include "game.hpp"
#include "sfx.hpp"
#include <SDL_mixer.h>
int main(void) {
    Game game;
    BackgroundMusic music;
    if (game.init()) {
        music.loadMusic("assets/sfx/classic-tetris.wav");
        music.playLoop();
        game.start();

        while (game.isRunning()) {
            game.handleEvents();
            game.update();
            game.render();
            game.sleep();
        }
        
    }
    
}