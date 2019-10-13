#pragma once
#include <string>
#include <iostream>

class Boek
{
	public:
		Boek();
		Boek(std::string typeInput);
		virtual ~Boek();

		std::string getType();
		void setType(std::string typeInput);

	private:
		std::string type = "(onbekend)";

};

