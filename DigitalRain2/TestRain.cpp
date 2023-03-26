#include <iostream>     // cout
#include <cstdlib>      // system
#include <random>       // random number generation
#include <chrono>       // time utilities
#include <thread>       // thread sleep
#include <vector>       //Vector
#include "TestRain.h"
#include "Rain.h"

void rainTest() {
    std::vector<int> v(28);
    for (int i = 0; i < 150; i++) {
        fillRand(v);
        int x = getX();
        int y = 0;
        std::cout << "\033[" << y << ";" << x << "H";
        int c = 0;
        for (auto& r : v) {
            c = c + 1;
            std::cout << r << "\033[" << y + c << ";" << x << "H";
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
    }
}

int fillRand(std::vector<int>& v) {
    static std::default_random_engine e;
    static std::uniform_int_distribution <int> u(0, 1);

    for (auto& r : v) {
        r = u(e);
    }

    return 0;
}

int getX() {
    static std::default_random_engine b;
    static std::uniform_int_distribution <int> a(0, 90);
    int x = a(b);

    return x;
}