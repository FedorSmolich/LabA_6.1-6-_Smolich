#pragma once
#include <iostream>
#include "Object.h"
using namespace std;
class Chest : public Object
{
private:
    unsigned int width;
    unsigned int height;
    int coins;
public:
    Chest(unsigned int width, unsigned int height, int coins, int X, int Y);
    ~Chest();
    void set_height(int new_height);
    void get_height();
    void get_width();
    void set_width(int new_width);
    void set_coins(int coins);
    int get_coins();
    void all_characteristics() const;
};
