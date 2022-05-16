#include "readInput.h"
using namespace std;

// Split Words into array for later use in init obj
vector<string> splitByWords(string str)
{
	// Vector of words
	vector<string> words;

	// Used to split string around spaces.
	istringstream ss(str);

	string word;

	// I outsource while loop condition ss >> word part from geeksforgeeks.com
	// Traverse through all words
	// while loop till we get 
	// strings to store in string word
	while (ss >> word)
	{
		//Put word into words vector
		words.push_back(word);
	}

	return words;
}


vector<string> readInput(string inputFileName)
{
	// Read Mode for Input
	fstream input;
	input.open(inputFileName, ios::in);

	//vector of lines
	vector<string> lines;
	try 
	{
		if (input.is_open())
		{
			string line;
			while (getline(input, line)) {
				//cout << line << endl;
				lines.push_back(line);
			}
			input.close();
		}
		else
		{
			throw(false);
		}
	}
	catch(...)
	{
		cout << "There has been error while opening input file check the name: " << inputFileName << endl;
	}

	return lines;
}