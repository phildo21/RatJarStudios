// cocola_Machine_Phildo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;




void display_Soda(char selection, map<char,string> &sodaMap);



int main()
{
    char selection;
    map<char, string> sodaMap = {
    {'1',"Sprite"},
    {'2',"Coke"},
    {'3',"Bang"},
    {'4',"Red Bull"},
    {'5',"Booze"},
    {'6',"Coke"}
    };

    do {
        system("CLS");
        cout << "\t\t\t PHILDO's beverages" << endl;
        cout << "\t\t-------------------------------" << endl;
        cout << "\n\n\t\tSelect your beverage from the menu below (1-5)" << endl;

        cout << "\t(1) Sprite" << endl;
        cout << "\t(2) Coke" << endl;
        cout << "\t(3) Bang" << endl;
        cout << "\t(4) Red Bull" << endl;
        cout << "\t(5) Booze" << endl;
        cin >> selection;

        switch (selection) {
        case '1':

            display_Soda(selection,sodaMap);

            break;

        case '2':

            display_Soda(selection, sodaMap);

            break;
        case '3':

            display_Soda(selection, sodaMap);

            break;
        case '4':

            display_Soda(selection, sodaMap);

            break;
        case '5':

            display_Soda(selection, sodaMap);

            break;
        case '6':

            system("cls");
            cout << "Enjoy your Soda!! bitch" << endl;
            system("pause");
            break;

        }
    } while (selection != '6');

    return 0;
}

void display_Soda(char selection, map<char, string> &sodaMap) {
    system("CLS");
    auto it = sodaMap.find(selection);
    if (it != sodaMap.end()) {
        cout << "You Ordered a " << it->second << "\n" << endl;
    }
    system("pause");

}