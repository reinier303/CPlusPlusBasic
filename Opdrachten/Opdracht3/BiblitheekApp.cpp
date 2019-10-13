// Broodjes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Boek.h"

#include "Bibliotheek.h"

void passMandje(Bibliotheek* mandje)
{
	std::cout << "Bibliotheek gekregen" << std::endl;
	mandje->show();

	mandje->add("The Last Wish");
	mandje->show();
}

int main()
{
	std::cout << "Bibliotheek maken" << std::endl;
	Bibliotheek bibliotheek = Bibliotheek();
	bibliotheek.show();

	bibliotheek.add("The Lord of The Rings");
	bibliotheek.show();

	passMandje(&bibliotheek);

	std::cout << "Bibliotheek teruggekregen" << std::endl;
	bibliotheek.show();

	return 0;
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
