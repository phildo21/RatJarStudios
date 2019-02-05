// cocola_Machine_Phildo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string.h>
using namespace std;






int main()
{
    char selection;
    map<char, string> sodaMap = {

        { '1',"Sprite"}


    };

    for (const auto &p : sodaMap) {
        cout << p.first <<" secondL " << p.<char*>(second) << endl;
    }
    system("pause");
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

           // cout << "You Chose: " << sodaMap(selection) << endl;
                system("pause");

            break;
        }
    } while (selection != '6');





    return 0;
}

