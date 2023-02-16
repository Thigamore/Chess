#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Hello", 100, 100, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    if(window == NULL) {
        std::cout << "Could not create window: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Surface *surface = SDL_GetWindowSurface(window);

    SDL_Event windowEvent;
    while(true) {
        if(SDL_PollEvent(&windowEvent)) {
            if(windowEvent.type == SDL_QUIT) {
                break;
            }
        }
    }

    SDL_FreeSurface(surface);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}