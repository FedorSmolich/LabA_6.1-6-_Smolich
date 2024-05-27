#include <iostream>
#include "Object.h"
#include "Player.h"
#include "Chest.h"
#include "Trader.h"
#include "Stone.h"
using namespace std;
Object::Object()
{
    X = 0;
    Y = 0;
}
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
    return X;
}
int Object::get_cordy()
{
    return Y;
}
void Object::all_characteristics()
{
    cout << "Координатa X: " << X << endl;
    cout << "Координатa Y: " << Y << endl;
}
   