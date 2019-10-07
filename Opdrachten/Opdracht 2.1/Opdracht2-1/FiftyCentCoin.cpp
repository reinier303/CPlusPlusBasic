#include "FiftyCentCoin.h"

FiftyCentCoin::FiftyCentCoin(std::string nameInput, float valueInput) : Coin(nameInput, valueInput)
{
	setName(nameInput);
	setValue(valueInput);
}
