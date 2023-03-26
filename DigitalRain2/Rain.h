#ifndef RAIN_H
#define RAIN_H

#include <string>  //string
#include <vector> //vector
#include <iostream> //iostream

class Rain {
public:
    static void run();
    static int getX();
private:
    static int systemColours();
    static void RunRain();
    static int fillRand();
    static int setWidth(int w);
    static int setLenght( int lenght);
    static std::vector<int> raindrop;
};

#endif