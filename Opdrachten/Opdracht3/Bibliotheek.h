#pragma once
#include <string>
#include "Boek.h"

class Bibliotheek
{
	public:
		Bibliotheek();
		virtual ~Bibliotheek();
		Bibliotheek(const Bibliotheek& bibliotheek);
		Bibliotheek& operator=(const Bibliotheek& other);

		void show();
		void add(std::string inputType);
	private:
		Boek* boek = nullptr;
};

