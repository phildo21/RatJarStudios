#include "Bracket_Search.h"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "iostream"
using namespace std;

gameData results;

gameData randomNumber() {
    srand(time(NULL));
    results.randomNumber = rand()%100;

    return results;






}