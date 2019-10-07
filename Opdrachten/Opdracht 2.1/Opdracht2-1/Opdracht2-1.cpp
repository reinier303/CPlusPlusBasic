// Opdracht2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FiftyCentCoin.h"
#include "OneEuroCoin.h"
#include "CoffeCoin.h"

#include "CoffeeMachine.h"


int main()
{
	CoffeeMachine coffeeMachine;
	FiftyCentCoin fiftyCoin = FiftyCentCoin("50 Cent", 0.50f);
	OneEuroCoin oneCoin = OneEuroCoin("1 Euro", 1.0f);
	CoffeCoin coffeCoin = CoffeCoin("Cofee Coin", 0.0f);

	coffeeMachine.takeCoin(fiftyCoin);
	coffeeMachine.takeCoin(oneCoin);
	coffeeMachine.takeCoin(coffeCoin);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
