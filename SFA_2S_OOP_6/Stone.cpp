#include <iostream>
#include "Object.h"
#include "Stone.h"
using namespace std;
Stone::Stone() : Object()
{
    picture_id = 1;
}
Stone::Stone(int picture_id, int X, int Y) : Object(X, Y)
{
    if (picture_id < 1 || picture_id > 10000)
    {
        cout << "�������� ������������� ����������� �����." << endl;
        picture_id = 0;
    }
    else
    {
        this->picture_id = picture_id;
    }
}
Stone::~Stone() {}
void Stone::set_new_picture_id(int new_picture_id)
{
    if (new_picture_id < 1 && new_picture_id>10000)
    {
        cout << "�������� ������������� ����������� �����." << endl;
        new_picture_id = 0;
    }
    picture_id = new_picture_id;
}
int Stone::get_picture_id()
{
    return picture_id;
}
void Stone::all_characteristics() const
{
    cout << "���������a X: " << X << endl;
    cout << "���������a Y: " << Y << endl;
    cout << "��� ����� � �����������: " << picture_id << endl;
}