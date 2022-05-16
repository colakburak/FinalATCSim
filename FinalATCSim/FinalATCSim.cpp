#include <iostream>
using namespace std;

#include "Flight.h"
#include "readInput.h"
#include "Queue.h"
#include "writeOutput.h"


int main()
{	

	//Reading input txt file
	vector<string>lines = readInput("input.txt");

	//Creating landing Queue
	Queue q;

	//Counter for landing order
	int cnt = 1;

	//Init Loop for Flight Classes
	for (int i = 1; i < lines.size(); i++) {
		
		//Split line into words and append into words string vector
		vector<string> words = splitByWords(lines[i]);

		//Using String stream to write strings with variables
		ostringstream oss;


		if (words[1] == "COM")
		{
			oss << "This is COM Commercial Flight with No: " << words[0]<<endl;
			Com C(stoi(words[0]), words[1], words[2], words[3], stod(words[4]), stod(words[5]));
			oss << C.getFlightInfo();
			oss << "Lower your speed: -" << C.lowerSpeed() << " Knots" << endl;
			oss << "Lower your altitude: -" << C.lowerAlt(C.altitude) << " Ft" << endl;
		}
		else if (words[1] == "MAC")
		{
			oss << "This is MAC Military Flight with No: " << words[0]<< endl;
			Mac M(stoi(words[0]), words[1], words[2], words[3], stod(words[4]), stod(words[5]));
			oss << M.getFlightInfo();
			oss << "Lower your speed: -" << M.lowerSpeed() << " Knots" << endl;
			oss << "Lower your altitude: -" << M.lowerAlt(M.altitude) << " Ft" << endl;
		}
		else if (words[1] == "PRI")
		{
			oss << "This is PRI Private Flight branch of Commercial Flight with no: " << words[0]<< endl;
			Pri P(stoi(words[0]), words[1], words[2], words[3], stod(words[4]), stod(words[5]));
			oss << P.getFlightInfo();
			oss << "Lower your speed: -" << P.lowerSpeed() << " Knots" << endl;
			oss << "Lower your altitude: -" << P.lowerAlt(P.altitude) << " Ft" << endl;
		}
		else
		{
			oss << "Unknown flight type!Please contact with AirForce" << endl;
			writeOutLog(oss.str());
		}

		oss << "Flight " << words[0] << ", you are at: " << cnt << " on Landing Queue." << endl;
		oss << "------" << endl;

		writeOutLog(oss.str());

		q.push(stoi(words[0]));
		cnt++;
	}

	writeOutLog("------- Landing Queue Part (Test Cases) --------");
	
	// See the landing Queue
	string landingOrder = q.print();
	writeOutLog("This is landing queue by Flight No ~ [First Second Third ... Last]:");
	writeOutLog(landingOrder);
	writeOutLog("-------");


	// Landings starts
	writeOutLog("Popping Landed Flights (5 Landing will be happen) from the queue, identify them by their Flight No:");

	// Few Landings happening here
	string poped1 = to_string(q.pop());
	writeOutLog(poped1);
	string poped2 = to_string(q.pop());
	writeOutLog(poped2);
	string poped3 = to_string(q.pop());
	writeOutLog(poped3);
	string poped4 = to_string(q.pop());
	writeOutLog(poped4);
	string poped5 = to_string(q.pop());
	writeOutLog(poped5);

	writeOutLog("Updated landing Queue after landings");
	string landingLeft = q.print();
	writeOutLog(landingLeft);

	return 0;
}