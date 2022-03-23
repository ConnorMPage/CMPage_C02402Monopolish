//Connor Michael Page
#include "CJail.h"

CJail::CJail(istream& file):CSquare(file)//constructer
{
	file >> *this;
}
//virtual function for the addition and subtractoion of moeny from the player class
int CJail::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)
{
	cout << player->GetPlayerName() << " lands on jail" << endl;
	cout << player->GetPlayerName() << " is just visiting" << endl;
	return 0;//this tile has no value for deduction so returns 0
}

istream& operator>>(istream& inputStream, CJail& jail)//inputsdata from the input file 
{
	return inputStream;//returns the inputstream
}
