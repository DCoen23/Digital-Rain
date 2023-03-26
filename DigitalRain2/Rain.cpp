#include <iostream>     // cout
#include <cstdlib>      // system
#include <random>       // random number generation
#include <chrono>       // time utilities
#include <thread>       // thread sleep.0
#include "Rain.h"


std::vector<int> Rain::raindrop(setLenght(28));

void Rain::run() {
    systemColours();
    RunRain();
}

int Rain::systemColours

  () {
    std::system("COLOR 02");
    return 0;
}

void Rain::RunRain() {
    for (int i = 0; i < 150; ++i) {
        fillRand();
        int x = getX();
        int y = 0;
        int c = 0;
        for (auto& r : raindrop) {
            c = c + 1;
            std::cout << r << "\033[" << y + c << ";" << x << "H";

            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
    }
}

int Rain::fillRand() {
    static std::default_random_engine e;
    static std::uniform_int_distribution <int> u(0, 1);

    for (auto& r : raindrop) {
        r = u(e);
    }

    return 0;
}

int Rain::getX() {
    static std::default_random_engine e;
    static std::uniform_int_distribution <int> u(0, setWidth(90));
    int x = u(e);

    return x;
}
int Rain::setWidth(int width) {
    int w = width;
    return width;
}

int Rain::setLenght(int lenght) {
    int l = lenght;
    return l;
}