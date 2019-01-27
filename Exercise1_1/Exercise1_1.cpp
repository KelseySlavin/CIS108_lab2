// Exercise1_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	std::cout <<"Enter your age: ";
	int age;
	std::cin >> age;
	std::cout << "In ten years you will be " << age + 10 << " years old.";
	std::cout << '\n';
	std::cout << "What is the current temperature in degrees fahrenheit? ";
	double fahrenheit;
	std::cin >> fahrenheit;
	std::cout << '\n';
	double celcius = (fahrenheit * 5.0/9.0) - 32.0;
	std::cout << "the temperature in degress celcius is: " << celcius;

}