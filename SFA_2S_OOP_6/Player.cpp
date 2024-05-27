#include <iostream>
#include "Object.h"
#include "Player.h"
using namespace std;
Player::Player() : Object()
{
    clothing_color = "";
    name = "";
}
Player::Player(string clothing_color, string name, int X, int Y) : Object(X, Y)
{
    this->clothing_color = clothing_color;
    this->name = name;
}
Player::~Player() {}
void Player::set_new_clothes(string new_clothing_color)
{
    clothing_color = new_clothing_color;
}
string Player::get_clothing_color()
{
    return clothing_color;
}
void Player::set_name(string new_name)
{
    name = new_name;
}
string Player::get_name()
{
    return name;
}
void Player::all_characteristics() const
{
    cout << "Координатa X: " << X << endl;
    cout << "Координатa Y: " << Y << endl;
    cout << "Цвет одежды игрока: " << clothing_color << endl;
    cout << "Имя игрока: " << name << endl;
}