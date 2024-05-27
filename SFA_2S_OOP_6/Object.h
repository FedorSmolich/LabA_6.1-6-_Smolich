#pragma once
#include <iostream>
using namespace std;
 class Object
{
protected:
    int X;
    int Y;
public:
    Object();
    Object(int X, int Y);
    ~Object();
    void set_cordx(int iX);
    void set_cordy(int iY);
    int get_cordx();
    int get_cordy();
    virtual void all_characteristics();
};