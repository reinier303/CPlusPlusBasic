#include "Coin.h"

Coin::Coin(std::string nameInput, float valueInput)
{
	name = nameInput;
	value = valueInput;
}

std::string Coin::getName()
{
	return name;
}

float Coin::getValue()
{
	return value;
}

void Coin::setName(std::string nameInput)
{
	name = nameInput;
}

void Coin::setValue(float valueInput)
{
	value = valueInput;
}
