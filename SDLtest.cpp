#include <iostream>
#define SDL_MAIN_HANDLED
#include <SDL.h>

using namespace std;

int SDL_main(int argc, char* argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    else {
        std::cout << "init success" << endl;
    }
    SDL_Quit();
    return 0;
}
