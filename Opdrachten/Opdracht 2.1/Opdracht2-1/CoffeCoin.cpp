#include "CoffeCoin.h"

CoffeCoin::CoffeCoin(std::string nameInput, float valueInput) : Coin(nameInput, valueInput)
{
	setName(nameInput);
	setValue(valueInput);
}
