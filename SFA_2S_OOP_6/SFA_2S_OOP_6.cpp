#include <iostream>
#include "Object.h"
#include "Player.h"
#include "Chest.h"
#include "Trader.h"
#include "Stone.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    Player player("Gray", "Fedor", 1, 2);
    player.all_characteristics();
    player.set_cordx(2);
    player.set_cordx(3);
    player.set_new_clothes("Purple");
    player.all_characteristics();
    cout << "------------------------------------" << endl;
    Stone stone(73, 6, 5);
    stone.all_characteristics();
    cout << "------------------------------------" << endl;
    Chest chest(2, 2, 10, 7, 8);
    chest.all_characteristics();
    cout << "------------------------------------" << endl;
    Trader trader(55, 5, 10, 11);
    trader.all_characteristics();
    cout << "------------------------------------" << endl;
    return 0;
}
