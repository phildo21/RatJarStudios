#include <iostream>
#include <map>
#include <string>
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "Bracket_Search.h"
#include <vector>

using namespace std;









int main() {

    gameData results;
    results = randomNumber();
    int selection;
    int upperBound = 100;
    int lowerBound = 1;

    cout << "------------------------Select a game mode------------------------" << endl;
    cout << "1: Player Vs Computer-- You guess the computers 'SECRET' number." << endl;
    cout << "2: Computer Vs Player-- The computer will guess your 'SECRET' number." << endl;

    cin >> results.gameMode;



    if (results.gameMode == 1) {
        do {

            cout << "Guess a number between (0-100) :" << endl;
            cin >> selection;

            if (selection > results.randomNumber)
            {
                system("cls");
                cout << "Guess Lower" << endl;
                results.guesses += 1;
            }

            else if (selection < results.randomNumber)
            {
                system("cls");
                cout << "Guess Higher" << endl;
                results.guesses += 1;
            }

            else if (selection < results.randomNumber)
            {
                break;
            }

        } while (selection != results.randomNumber);

        system("cls");
        cout << "Congrats!! you guessed the number in: " << results.guesses << " trys!\n" << endl;
    }




    
    else if (results.gameMode == 2)
    {

        cout << "Enter a number for the computer to guess: " << endl;
        cin >> results.userNumber;

        const auto num_iterations = 1000;

        std::vector<int> num_tries;

        for (int i = 0; i < num_iterations; i++)
        {
            lowerBound = 1;
            upperBound = 100;
            results.computerGuess = 0;
            results.computerTrys = 0;

            do {
                if (upperBound == lowerBound) {

                    results.computerGuess = upperBound;
                }

                else {
                    results.computerGuess = rand() % (upperBound - lowerBound) + lowerBound;
                }
                cout << "\nComputer's guess is: " << results.computerGuess << endl;

                if (results.computerGuess > results.userNumber) //case: guess is too high
                {
                    cout << "Guess is to high." << endl;
                    upperBound = results.computerGuess - 1;
                    results.computerTrys += 1;
                }

                else if (results.computerGuess < results.userNumber) //case: guess is too low
                {
                    cout << "Guess is to low." << endl;
                    lowerBound = results.computerGuess + 1;
                    results.computerTrys += 1;
                }

                else if (results.computerGuess == results.userNumber)
                {
                    results.computerTrys += 1;
                    cout << "YAY! the computer guessed the correct number in: " << results.computerTrys << " trys." << endl;


                }

            } while (results.computerGuess != results.userNumber);


            num_tries.push_back(results.computerTrys);
        }

        int sum = 0;
        int max = 0;
        std::map<int, int> numTriesMap;

        for (auto it = num_tries.begin(); it != num_tries.end(); ++it)
        {
            sum += *it;

            if (max < *it)
            {
                max = *it;
            }

            auto iter = numTriesMap.find(*it);
            if (iter != numTriesMap.end())
            {
                iter->second++;
            }
            else
            {
                numTriesMap.insert(std::make_pair(*it, 1));
            }
        }

        float average = (float) (sum) / num_tries.size();

        std::cout << "\n\nMax Num Tries: " << max << std::endl;
        std::cout << "Average: " << average << std::endl;


        std::cout << "\n\nNum Tries\tNum Occurences" << std::endl;
        for (auto it = numTriesMap.begin(); it != numTriesMap.end(); ++it)
        {

            std::cout << it->first << "\t\t" << it->second << std::endl;
        }
    }



    system("pause");
	



	return 0;
}