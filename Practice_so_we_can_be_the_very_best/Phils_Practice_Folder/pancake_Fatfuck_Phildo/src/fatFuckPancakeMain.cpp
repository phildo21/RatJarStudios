#include "FatFuckHeader.h"
#include "iostream"
#include "stdio.h"
#include "vector"

using namespace std;



int main() {

    vector<int> pancakesEaten;
    int currentPancakesEaten = 0;
    int tempPancakes = 0;
    int tempPerson;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter how many pancakes person " << i << " eat." << endl;
        cin >> currentPancakesEaten;
        pancakesEaten.push_back(currentPancakesEaten);

}

    system("cls");
    cout << "Now lets see who is the fatest fatfuck of all...." << endl;
    system("pause");

    for (auto i=0; i<10; i++)
    {
        if (pancakesEaten[i] >= tempPancakes) {
            tempPancakes = pancakesEaten[i];
            tempPerson = i + 1;
        }
    }

    cout << "Person " << tempPerson << " ate " << tempPancakes << " pancakes...\nWHAT A FAT PIECE OF SHIT!" << endl;









}