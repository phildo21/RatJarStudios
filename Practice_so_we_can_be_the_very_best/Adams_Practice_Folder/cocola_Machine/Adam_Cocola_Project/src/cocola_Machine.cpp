#include <iostream>
#include <map>
#include <string>
#include "cocola_Functions.h"

using namespace std;


int main() {

	int selection = 0;

	cout << "Hello! Please make your selection of soda with the corresponding number:" << endl;
	cout << "Nuka-Cola = 1\tNuka-Cola Quantum = 2\tDiet Nuka-Cola = 3\tMutant Energy = 4\tSurge = 5" << endl;

	
	cin >> selection;

	if (selection >= 1 && selection <= 5) {
		switch (selection)
		{
		case 1:
			cout << "Thank you! Enjoy your Nuka-Cola." << endl;
			break;
		case 2:
			cout << "Thank you! Enjoy your Nuka-Cola Quantum." << endl;
			break;
		case 3:
			cout << "Thank you! Enjoy your Diet Nuka-Cola." << endl;
			break;
		case 4:
			cout << "Thank you! Enjoy your Mutant Energy." << endl;
			break;
		case 5:
			cout << "Thank you! Enjoy your Surge." << endl;
			break;
		}
	}
	else {
		cout << "Invalid selection. Fuck off." << endl;
	}

	system("pause");
	



	return 0;
}