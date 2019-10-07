// Opdracht2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

char* ReverseString(char * pString)
{
	if (NULL == pString)
	{
		return NULL;
	}

	char* pStart = pString;
	char* pEnd = pStart + strlen(pString) - 1;

	while (pEnd > pStart)
	{
		char temp = *pStart;
		*pStart = *pEnd;
		* pEnd = temp;

		pStart++;
		pEnd--;
	}

	return pString;
}

int main()
{
	//Get string from file
	std::string stringHolder;
	std::ifstream myFile1;

	myFile1.open("File1.txt");
	if (!myFile1) 
	{
		std::cout << "File opening error" << std::endl;
		exit(1);
	}
	std::getline(myFile1, stringHolder);
	myFile1.close();

	std::cout<< "string: " << stringHolder << " found in file" << std::endl;


	std::ofstream myFile2;
	myFile2.open("File2.txt");
	if (!myFile2) 
	{
		std::cout << "File opening error" << std::endl;
		exit(1);
	}
	myFile2 << "MyNameJeff";

	myFile2.close();

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
