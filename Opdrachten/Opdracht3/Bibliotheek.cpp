#include "Bibliotheek.h"

Bibliotheek::Bibliotheek()
{
}

Bibliotheek::~Bibliotheek()
{
	std::cout << " Boek weg " << std::endl;
	delete boek;

}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek)
{
	std::cout << "Bibliotheek: copy-ctor" << std::endl;
	if (this == &bibliotheek) return;
	boek = new Boek(bibliotheek.boek->getType());
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& other)
{
	std::cout << "Bibliotheek: assignment-oper" << std::endl;
	if (this == &other) return *this;

	if (boek) delete boek;
	boek = new Boek(other.boek->getType());
	return *this;
}

void Bibliotheek::show()
{
	std::cout << " Bibliotheek bevat " << boek->getType() << std::endl;
}

void Bibliotheek::add(std::string inputType)
{
	boek = new Boek(inputType);
}
