#include "Flight.h"

string Flight::getFlightInfo()
{
	ostringstream ss;

	ss << name<<", " << type << ", " << from << ", " << to << ", " << speed << ", " << altitude << endl;

	return ss.str();
}

double Flight::lowerAlt(double altitude)
{
	return altitude;
}

double Com::lowerSpeed()
{
	return Flight::speed - landingSpeed;
}

double Mac::lowerSpeed()
{
	return Flight::speed - landingSpeed;
}

double Pri::lowerSpeed()
{
	return Flight::speed - landingSpeed;
}

