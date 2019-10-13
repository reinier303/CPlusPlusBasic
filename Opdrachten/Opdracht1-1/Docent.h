#pragma once
#include <string>
#include <vector>
#include "Klas.h"

class Docent
{
	//Data van docent
	private:
		std::string name;
		std::vector<int> beschikbaarheidsTijden;
		std::vector<Klas> klassen;
};

