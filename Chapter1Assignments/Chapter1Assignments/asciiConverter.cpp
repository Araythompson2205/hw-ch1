#include "asciiConverter.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;
asciiConverter::asciiConverter() {
	arr = new int[0];
	forConversion = " ";
}
void asciiConverter::inputHandler() {
	cout << "Enter a text line: \n";
	getline(cin, forConversion);
	//cin.clear();
	//cin.ignore(10000,'\n');
	
 }
void asciiConverter::asciiConversionHandler() {
	cout << forConversion.size();
	int asciiNum;
	delete arr;
	arr = new int(forConversion.size());
	for (int i = 0; i < forConversion.size(); i++) {

		asciiNum = forConversion[i];
		arr[i] = asciiNum;
		cout << arr[i];
	}

}
void asciiConverter::asciiFileExport() {
	/*ofstream outFile("test.txt");
	outFile.open("test.txt");*/
	
	ifstream inFile("test.txt");
	inFile.open("test.txt");
	if (!inFile) {
		cout << "uh oh\n";
		exit(42);
	}
	
	/*inFile.close();*/


}