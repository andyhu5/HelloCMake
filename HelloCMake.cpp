#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "HelloCMake.h"

int main(int argc, char* argv[]) {
    SDL_Window* window = nullptr;
    bool done = false;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "SDL initialization failed: %s", SDL_GetError());
        return 1;
    }

    window = SDL_CreateWindow("SDL3 Window", 640, 480, SDL_WINDOW_OPENGL);
    if (!window) {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Window creation failed: %s", SDL_GetError());
        return 1;
    }

    while (!done) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                done = true;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}