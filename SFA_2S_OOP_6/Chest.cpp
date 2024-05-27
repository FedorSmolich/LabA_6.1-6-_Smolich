#include <iostream>
#include "Object.h"
#include "Chest.h"
using namespace std;
Chest::Chest(unsigned int width, unsigned int height, int coins, int X, int Y) : Object(X, Y)
{
    this->width = width;
    this->height = height;
    this->coins = coins;
}
Chest::~Chest() {}
void Chest::set_height(int new_height)
{
    height = new_height;
}
void Chest::get_height()
{
    cout << "������ - " << height << endl;
}
void Chest::set_width(int new_width)
{
 width = new_width;
}
void Chest::get_width()
{
    cout << "������ - " << width<< endl;
}
void Chest::set_coins(int coins)
{
    this->coins = coins;
}
int Chest::get_coins()
{
    cout << "���������� ����� � �������: " << coins << endl;
    return coins;
}
void Chest::all_characteristics() const
{
    cout << "���������a X: " << X << endl;
    cout << "���������a Y: " << Y << endl;
    cout << "������ - " << height << endl;
    cout << "������ - " << width << endl;
    cout << "���������� ����� � �������: " << coins << endl;
}