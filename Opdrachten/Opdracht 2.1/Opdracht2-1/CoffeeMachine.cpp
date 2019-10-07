#include "CoffeeMachine.h"

void CoffeeMachine::takeCoin(Coin coin)
{
	if (coin.getValue() == 0.50f)
	{
		std::cout << coin.getName() << " can get you: " << coffees[2] << "\n";
	}
	if (coin.getValue() == 1.0f)
	{
		std::cout << coin.getName() << " can get you: " << coffees[2] << " or " << coffees[1] << "\n";
	}
	if (coin.getValue() == 0.0f)
	{
		std::cout << coin.getName() << " can get you: " << coffees[2] << ", " << coffees[1] << " or " << coffees[0] << "\n";
	}
}
