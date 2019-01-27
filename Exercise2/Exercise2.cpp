// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
	cout << "Enter book title: ";
	string title;
	getline(cin, title);
	cout << "Enter the name of the author: ";
	string author;
	getline(cin, author);
	cout << "Enter the publish year of the book: ";
	int book_year;
	cin >> book_year;
	cout << "Enter the total number of pages in the book: ";
	int pages;
	cin >> pages;
	constexpr int this_year = 2019;
	int year_old = this_year - book_year;
	if (year_old < 10) cout << "This book is younger than ten years.\n"; else cout << "This book is at least ten years old.\n";
	if (pages < 100) cout << "This is a short book."; 
	else if (pages < 300) cout << "This is an average book.";
	else cout << "This is a long book.";












}
