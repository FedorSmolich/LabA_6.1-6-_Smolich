#include <iostream>
#include "Object.h"
#include "Player.h"
#include "Chest.h"
#include "Trader.h"
#include "Stone.h"
using namespace std;
Object::Object(int X, int Y)
{
    this->X = X;
    this->Y = Y;
}
Object::~Object() {}
void Object::set_cordx(int iX)
{
    X = iX;
}
void Object::set_cordy(int iY)
{
    Y = iY;
}
int Object::get_cordx()
{
    cout << "���������a X: " << X << endl;
    return X;
}
int Object::get_cordy()
{
    cout << "���������a Y: " << Y << endl;
    return Y;
}
void Object::all_characteristics()
{
    get_cordx();
    get_cordy();
}
   