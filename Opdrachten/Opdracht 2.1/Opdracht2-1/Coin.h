#pragma once
#include <string>
class Coin
{
	private:
		std::string name;
		float value;
	public:
		Coin(std::string nameInput, float valueInput);
		std::string getName();
		float getValue();
		void setName(std::string nameInput);
		void setValue(float valueInput);
};

