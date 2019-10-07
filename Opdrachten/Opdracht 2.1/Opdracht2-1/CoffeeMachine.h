#pragma once
#include "Coin.h"
#include <string>
#include <iostream>

class CoffeeMachine
{
	private:
		std::string coffees[3] = {"Cappuccino", "Espresso", "Regular"};

	public : 
		void takeCoin(Coin coin);
};

