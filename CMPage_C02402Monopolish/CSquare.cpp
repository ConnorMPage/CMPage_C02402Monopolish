//Connor Michael Page
#include "CSquare.h"


CSquare::CSquare(istream& file)//constructer
{
	file >> *this;
}
//inputs the data from the file
istream& operator>>(istream& inputStream, CSquare& square)
{
	inputStream >> square.name;//sets the name of the tile
	return inputStream;//returns the inputstream
}
//used for the outputting of the tile name
ostream& operator<<(ostream& outputStream, const CSquare& square)
{
	outputStream << square.name;//sets the outstream
	return outputStream;
}
