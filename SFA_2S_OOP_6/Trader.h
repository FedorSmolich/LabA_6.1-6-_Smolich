#pragma once
#include <iostream>
#include "Object.h"
using namespace std;
class Trader : public Object
{
private:
    int product_id;
    int numb_sold_prod;
public:
    Trader(int product_id, int numb_sold_prod, int X, int Y);
    void set_product_id(int iproduct_id);
    void set_numb_sold_prod(int inumber_sold_prod);
    int get_product_id();
    int get_number();
    void all_characteristics() const;
    ~Trader();
};
