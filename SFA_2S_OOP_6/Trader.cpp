#include <iostream>
#include "Object.h"
#include "Trader.h"
using namespace std;
Trader::Trader() : Object()
{
    product_id = 0;
    numb_sold_prod = 0;
}
Trader::Trader(int product_id, int numb_sold_prod, int X, int Y) : Object(X, Y)
{
    if (product_id < 1 || product_id > 100)
    {
        cout << "Неверный код товара." << endl;
        product_id = 1;
    }
    this->product_id = product_id;
    if (numb_sold_prod < 0)
    {
        cout << "Неверное количество проданных товаров" << endl;
        numb_sold_prod = 0;
    }
    this->numb_sold_prod = numb_sold_prod;
}
Trader::~Trader() {}
void  Trader::set_product_id(int iproduct_id)
{
    if (iproduct_id < 1 || iproduct_id > 100)
    {
        cout << "Неверный код товара." << endl;
        iproduct_id = 1;
    }
    else
    {
        product_id = iproduct_id;
    }
}
void  Trader::set_numb_sold_prod(int inumber_sold_prod)
{
    if (numb_sold_prod < 0)
    {
        cout << "Неверное количество проданных товаров" << endl;
        inumber_sold_prod = 0;
    }
    numb_sold_prod = inumber_sold_prod;
}
int  Trader::get_product_id()
{
    return product_id;
}
int  Trader::get_number()
{
    return numb_sold_prod;
}
void  Trader::all_characteristics() const
{
    cout << "Координатa X: " << X << endl;
    cout << "Координатa Y: " << Y << endl;
    cout << "Идентификатор типа продукта: " << product_id << endl;
    cout << "Количество проданных товаров:" << numb_sold_prod << endl;
}