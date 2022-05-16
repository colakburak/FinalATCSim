#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Flight
{
public:
	int name; //Code of the plane
	string type; //COMercial, MACmilitary, PRIvate
	string from; //Departure airport code
	string to; //Destination airport code
	double speed; //knots
	double altitude; //ft

	
	//Constructor
	Flight(int name, string type, string from, string to, double speed, double altitude)
	{
		this->name = name;
		this->type = type;
		this->from = from;
		this->to = to;
		this->speed = speed;
		this->altitude = altitude;
	}

	//Methods
	virtual string getFlightInfo();
	virtual double lowerAlt(double altitude);
};


class Com : public Flight
{
	double landingSpeed = 70; //Knots
public:
	//Constructor
	Com(int name, string type, string from, string to, double speed, double altitude) :Flight(name, type, from, to, speed, altitude){}
	
	//Methods
	double lowerSpeed();

};

class Mac : public Flight
{
	double landingSpeed = 140; //Knots
public:
	//Consturactor
	Mac(int name, string type, string from, string to, double speed, double altitude) :Flight(name, type, from, to, speed, altitude){}

	//Methods
	double lowerSpeed();
};

class Pri : public Com
{
	double landingSpeed = 100; //Knots
public:
	//Constructor
	Pri(int name, string type, string from, string to, double speed, double altitude) :Com(name, type, from, to, speed, altitude){}

	//Methods
	double lowerSpeed();
};


#endif FLIGHT_H