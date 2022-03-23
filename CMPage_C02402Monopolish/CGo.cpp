//Connor Michael Page
#include "CGo.h"

CGo::CGo(istream& file):CSquare(file)//constructer
{
	file >> *this;
}
//
int CGo::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)//used for adding or subtracting form player money
{
	return 0;//no cost for this tile type
}
//inputs data from istream
istream& operator>>(istream& inputStream, CGo& go)
{
	return inputStream;//returns the input stream
}
