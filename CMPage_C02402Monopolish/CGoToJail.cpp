//Connor Michael Page
#include "CGoToJail.h"

CGoToJail::CGoToJail(istream& file):CSquare(file)//constructer
{
	file >> *this;
}
//virtual void for adding and subtracting form players money
int CGoToJail::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)
{
	//outputs two messages that use the getplayername function form the cplayer class 
	cout << player->GetPlayerName() << " goes to Jail" << endl;
	cout << player->GetPlayerName() << " pays " << POUND << mFine << endl;
	player->GoToJail();//sets the players board location to the jail tile
	return -mFine;//returns the fine value
}

istream& operator>>(istream& inputStream, CGoToJail& goToJail)
{
	inputStream >> goToJail.mNamePart2 >> goToJail.mNamePart3;//retrieves data from txt file
	goToJail.name = goToJail.name+" "+goToJail.mNamePart2, " "+goToJail.mNamePart3;//combines the object name
	return inputStream;//returns the input stream
}
