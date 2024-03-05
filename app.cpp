//#define SDL_MAIN_HANDLED

//#include <SDL_main.h>
//#include <SDL.h>
#include <iostream>
#include <protegon/Main.h>

//#define main WinMain

int main() {
    std::cout << "Hello!" << std::endl;
    initSDL();
    std::cin.get();
    // int i = 0;
    // while (true) {
    //     std::cout << i << std::endl;
    //     ++i;
    // }
    return 0;
}