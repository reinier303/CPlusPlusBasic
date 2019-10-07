// Opdracht 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Persoon.h"

int main()
{
	Persoon persoon = Persoon("Reinier", 21);
	std::cout << persoon.getName() << " is " << persoon.getAge() << " years old." << std::endl;
	Docent edwin = Docent("Edwin", 40, 15.5f);
	std::cout << edwin.getName() << " is around " << edwin.getAge() << " years old. And earns around €" << edwin.getSalary() <<std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
