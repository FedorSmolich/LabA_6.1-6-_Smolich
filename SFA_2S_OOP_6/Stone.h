#pragma once
#include <iostream>
#include "Object.h"
using namespace std;
class Stone : public Object
{
private:
    int picture_id;
public:
    Stone(int picture_id, int X, int Y);
    ~Stone();
    void set_new_picture_id(int new_picture_id);
    int get_picture_id();
    void all_characteristics() const;
};