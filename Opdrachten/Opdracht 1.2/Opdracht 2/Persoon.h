#pragma once
#include <string>

class Persoon
{
private:
	std::string name;
	int age;

public:
	Persoon();
	Persoon(std::string nameInput, int ageInput);
	std::string getName();
	int getAge();
};

class Docent : public Persoon
{
	private:
		float salary;
	public:
		Docent(std::string nameInput, int ageInput, float salaryInput);
		float getSalary();
};

class Student : public Persoon
{
	private:
		int ec;
	public:
		Student(std::string nameInput, int ageInput, int ecInput);
		int getEc();
};