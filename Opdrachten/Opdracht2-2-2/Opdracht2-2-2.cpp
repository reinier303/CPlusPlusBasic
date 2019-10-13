// Opdracht2-2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>



int main()
{
	//Create string to hold file text.
	std::string stringHolder;

	//Open first file.
	std::ifstream myFile1;
	myFile1.open("File1.txt");
	if (!myFile1)
	{
		std::cout << "File opening error with File1" << std::endl;
		exit(1);
	}

	//Open second file.
	std::ifstream myFile2;
	myFile2.open("File2.txt");
	if (!myFile2)
	{
		std::cout << "File opening error with File2" << std::endl;
		exit(1);
	}

	//Create third file to put text in.
	std::ofstream myFile3;
	myFile3.open("File3.txt");
	if (!myFile3)
	{
		std::cout << "File opening error with File3" << std::endl;
		exit(1);
	}

	//While myFile1 and myFile2 are not at the end of file put text in myFile3.
	while (!myFile1.eof() || !myFile2.eof())
	{
		std::getline(myFile1, stringHolder);
		myFile3 << stringHolder << std::endl;
		std::getline(myFile2, stringHolder);
		myFile3 << stringHolder << std::endl;
	}
	std::cout << "Created File3.txt with contents of File1 & File2" << std::endl;

	myFile1.close();
	myFile2.close();
	myFile3.close();

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
