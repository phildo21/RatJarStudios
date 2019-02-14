#include <iostream>
#include <string>
#include <time.h>
#include "bracket_Search_Functions.h"

using namespace std;


int main() {
	
	int game_Type; //variable for main menu

	int num_Tries = 0; //used for both games
	bool guessed = false;

	srand(time(0)); //variables for game where user guesses a number
	int random_Number = rand() % 100;
	int num_Guess;

	int comp_Guess = 50; //variables for game where computer guesses a number
	int top_Range = 100;
	int bottom_Range = 0;
	int comp_Correct = 1;



	cout << "\t\tThe Number Guessing Game" << endl; //title screen
	cout << "\t\t~ ~ <=====8  8=====> ~ ~" << endl;
	cout << endl;
	cout << "Enter 1 to be the guesser, enter 2 to make the computer guess." << endl;
	cout << endl;
	cin >> game_Type; //let the user decide the game type
	system("CLS"); //clear the title screen once a game has been started



	if (game_Type == 1) { //game where user guesses a number
		cout << "Guess a number 1-100:" << endl;

		while (guessed == false) { //keep allowing guesses until the user gets the right answer

			cin >> num_Guess;

			if (num_Guess < random_Number) {
				cout << "Too low..." << endl; //user enters a number guess that is too low
			}
			if (num_Guess > random_Number) {
				cout << "Too high..." << endl; //user enters a number guess that is too high
			}
			if (num_Guess == random_Number) {
				cout << "You are correct!" << endl; //user guesses the correct number
				guessed = true;
			}

			num_Tries++; //keep track of the number of tries
		}

		cout << "You guessed the number in " << num_Tries << " tries." << endl; //display the number of tries once the user gets the correct answer
	}



	if (game_Type == 2) { //game where computer guesses a number

		cout << "Think of a number and I will guess it in seven tries or less...\nEnter 1 if guess is too low, 3 if guess is too high, 2 if guess is correct." << endl;
		system("pause"); //pause the display of the rules until the user is ready to continue
		
		while (comp_Correct != 2) { //computer keeps guessing until the user says it is correct
			cout << "Is it " << comp_Guess << "?" << endl; //computer displays its current guess, starting with 50
			num_Tries++; //keep track of the number of tries
			cin >> comp_Correct; //let the user decide if the number is too low, too high, or correct

			if (comp_Correct == 1) {
				cout << "Damn... I'll try a higher number." << endl; //the computer guessed a number too low
				cout << endl;
				bottom_Range = comp_Guess; //now we know the correct answer cannot be lower than the current guess
				comp_Guess = floor((top_Range - bottom_Range) / 2) + bottom_Range; //computer picks a number approx. halfway within the known range to keep narrowing down
			}
			if (comp_Correct == 3) {
				cout << "Too high? Okay." << endl; //the computer guessed a number too high
				cout << endl;
				top_Range = comp_Guess; //now we know the correct answer cannot be higher than the current guess
				comp_Guess = floor((top_Range - bottom_Range) / 2) + bottom_Range; //computer picks a number approx. halfway within the known range to keep narrowing down
			}
		}

		cout << "See? I guessed it! your number was " << comp_Guess << " and I found it in " << num_Tries << " tries." << endl; //display the number of tries once the computer gets the correct answer
	}



	if (game_Type != 1 && game_Type != 2){
		cout << "Invalid number choice. Fuck off." << endl; //error checking for if the user enters a value not associated with a game type
	}



	system("pause"); //pause at the end of the game before exiting
}