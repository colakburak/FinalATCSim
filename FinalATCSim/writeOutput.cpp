#include "writeOutput.h"
using namespace std;

string nmOut = "output.txt";

void writeOutLog(string out)
{
	fstream outputfile;
	outputfile.open(nmOut, ios::app); //Append Mode so we don't overwrite outlogs
	try 
	{
		if (outputfile.is_open())
		{
			outputfile << out << endl;
		}
		else
		{
			throw false;
		}
	}

	catch(...)
	{
		cout << "Output file did not open please check the name of the file!: "<< nmOut << endl;
	}
}
