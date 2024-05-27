#include <iostream>
#include "Object.h"
#include "Player.h"
using namespace std;
Player::Player(string clothing_color, string name, int X, int Y) : Object(X, Y)
{
    this->clothing_color = clothing_color;
    this->name = name;
}
Player::~Player() {}
void Player::set_new_clothes(int new_clothing_color)
{
    clothing_color = new_clothing_color;
}
string Player::get_clothing_color()
{
    cout << "Цвет одежды игрока: " << clothing_color << endl;
    return clothing_color;
}

void Player::set_name(string new_name)
{
    name = new_name;
}

string Player::get_name()
{
    cout << "Имя игрока: " << name << endl;
    return name;
}
void Player::all_characteristics() const
{
    cout << "Координатa X: " << X << endl;
    cout << "Координатa Y: " << Y << endl;
    cout << "Цвет одежды игрока: " << clothing_color << endl;
    cout << "Имя игрока: " << name << endl;
}