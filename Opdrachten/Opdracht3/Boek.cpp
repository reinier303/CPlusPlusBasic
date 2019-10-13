#include "Boek.h"

Boek::Boek()
{
	std::cout << "Boek default ctor" << std::endl;
}

Boek::Boek(std::string typeInput)
{
	std::cout << "Boek ctor:: " << typeInput << std::endl;
	this->setType(typeInput);
}

Boek::~Boek()
{
	std::cout << "Boek: dtor: " << type << std::endl;
}

std::string Boek::getType()
{
	return type;
}

void Boek::setType(std::string typeInput)
{
	type = typeInput;
}
