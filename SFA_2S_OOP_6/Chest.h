#pragma once
#include <iostream>
#include "Object.h"
using namespace std;
class Chest : public Object
{
private:
    int width;
    int height;
    int coins;
public:
    Chest();
    Chest(unsigned int width, unsigned int height, int coins, int X, int Y);
    ~Chest();
    void set_height(int new_height);
    int get_height();
    int get_width();
    void set_width(int new_width);
    void set_coins(int coins);
    int get_coins();
    void all_characteristics() const;
};
