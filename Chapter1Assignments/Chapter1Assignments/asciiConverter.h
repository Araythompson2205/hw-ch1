#pragma once
#include <iostream>
using namespace std;
typedef int asciiArrPtr;
class asciiConverter
{
private:
	string forConversion;
	int *arr;

public:
	asciiConverter();
	void inputHandler();
	void asciiConversionHandler();
	void asciiFileExport();
	void asciiTxtReader();


};

