//Connor Michael Page
#include "CFreeParking.h"

CFreeParking::CFreeParking(istream& file):CSquare(file)//constructer
{
	file >> *this;
}
//this function requires a int to be returned for the adding or subtracting from the player money
int CFreeParking::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)
{
	
	cout << player->GetPlayerName() << " is resting" << endl;
	return 0;//this tile doesnt have a cost
}
//inputs from istream
istream& operator>>(istream& inputStream, CFreeParking& freeParking)
{
	inputStream >> freeParking.mNamePart2;//gets part 2 of the object name
	freeParking.name = freeParking.name + " " + freeParking.mNamePart2;//combines the object name
	return inputStream;//returns the input stream
}
