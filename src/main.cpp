#include <iostream>
#include <SDL2/SDL.h>
#include <main.h>
using namespace std;
const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[]) {
    coolio cool;
    cool.cool = 10;
    cout << "here";
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Hello", 100, 100, WIDTH, HEIGHT, SDL_WINDOW_ALWAYS_ON_TOP);
    cout << "Here";
    if(window == NULL) {
        std::cout << "Could not create window: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Event windowEvent;
    while(true) {
        if(SDL_PollEvent(&windowEvent)) {
            if(windowEvent.type == SDL_QUIT) {
                break;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}