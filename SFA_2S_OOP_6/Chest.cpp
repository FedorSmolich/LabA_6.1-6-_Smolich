#include <iostream>
#include "Object.h"
#include "Chest.h"
using namespace std;
Chest::Chest() : Object()
{
    width = 1;
    height = 1;
    coins = 0;
}
Chest::Chest(unsigned int width, unsigned int height, int coins, int X, int Y) : Object(X, Y)
{
    if (width < 1)
        width = 1;
    this->width = width;
    if (height < 1)
        height = 1;
    this->height = height;
    if (coins < 0)
        coins = 0;
    this->coins = coins;
}
Chest::~Chest() {}
void Chest::set_height(int new_height)
{
    if (new_height < 1)
    {
        cout << "�������� �������� ������" << endl;
        new_height = 1;
    }
    height = new_height;
}
int Chest::get_height()
{
    return height;
}
void Chest::set_width(int new_width)
{
    if (new_width < 1)
    {
        cout << "�������� �������� ������" << endl;
        new_width = 1;
    }
 width = new_width;
}
int Chest::get_width()
{
    return width;
}
void Chest::set_coins(int coins)
{
    if (coins < 0)
    {
        cout << "�������� ���������� �����" << endl;
        coins = 0;
    }
    this->coins = coins;
}
int Chest::get_coins()
{
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