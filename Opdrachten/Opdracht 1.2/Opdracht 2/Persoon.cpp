#include "Persoon.h"
#include <iostream>

Persoon::Persoon()
{
	name = "NoName";
	age = -1;
}

Persoon::Persoon(std::string nameInput, int ageInput)
{
	name = nameInput;
	age = ageInput;
}

Docent::Docent(std::string nameInput, int ageInput, float salaryInput) : Persoon(nameInput, ageInput)
{
	salary = salaryInput;
}

Student::Student(std::string nameInput, int ageInput, int ecInput) : Persoon(nameInput, ageInput)
{
	ec = ecInput;
}

std::string Persoon::getName()
{
	return name;
}

int Persoon::getAge()
{
	return age;
}

float Docent::getSalary()
{
	return salary;
}

int Student::getEc()
{
	return ec;
}
