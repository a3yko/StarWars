// Star wars.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int starWarsCount(string);

int _tmain(int argc, _TCHAR* argv[])
{
	string file;
	cout << " Enter the file name: " << endl;
	cin >> file;
	cout << " There are " << starWarsCount(file) << " Star Wars "<< endl;
	system("Pause");
	return 0;
}

int starWarsCount(string filename)
{
	ifstream fin;
	string word1, word2;
	int numSW = 0;
	fin.open(filename.c_str(), ios::in);
	
	fin >> word1;
	
	while (fin >> word2)
	{
		if (word1 + " " + word2.substr(0,4) == "Star Wars")
			numSW++;
		word1 = word2;
		
	}
	fin.close();
	return numSW;
}
