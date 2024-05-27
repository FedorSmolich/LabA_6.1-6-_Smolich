#pragma once
#include <iostream>
#include "Object.h"
using namespace std;
class Player : public Object
{
private:
    string clothing_color;
    string name;
public:
    Player();
    Player(string clothing_color, string name, int X, int Y);
    ~Player();
    void set_new_clothes(string new_clothing_color);
    string get_clothing_color();
    void set_name(string new_name);
    string get_name();
    void all_characteristics() const;
};
