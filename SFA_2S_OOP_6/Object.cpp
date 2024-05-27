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
    cout << "Координатa X: " << X << endl;
    return X;
}
int Object::get_cordy()
{
    cout << "Координатa Y: " << Y << endl;
    return Y;
}
void Object::all_characteristics()
{
    get_cordx();
    get_cordy();
}
   