#include <iostream>
#include <map>
#include <string>
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "Bracket_Search.h"

using namespace std;









int main() {

    gameData results;
    results = randomNumber();
    int selection;





    do {

        cout << "Guess a number between (0-100) :" << endl;
        cin >> selection;

        if (selection > results.randomNumber) 
        {
            system("cls");
            cout << "Guess Lower" << endl;
                results.guesses += 1;
        }

        else if(selection < results.randomNumber)
        {
            system("cls");
            cout << "Guess Higher" << endl;
            results.guesses += 1;
        }

        else if(selection < results.randomNumber)
        {
            break;
        }
  
    } while (selection != results.randomNumber);


    system("cls");
    cout << "Congrats!! you guessed the number in: " << results.guesses << " trys!\n" << endl;




    system("pause");
	



	return 0;
}