#include "OneEuroCoin.h"

OneEuroCoin::OneEuroCoin(std::string nameInput, float valueInput) : Coin(nameInput, valueInput)
{
	setName(nameInput);
	setValue(valueInput);
}
