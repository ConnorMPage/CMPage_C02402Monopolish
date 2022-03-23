//Connor Michael Page
#include "CBonus.h"

CBonus::CBonus(istream& file):CSquare(file)
{
	file >> *this;
}

int CBonus::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)
{
	// depending on the value produced in dicethrow a different message and value is outputted 
	if (diceThrow == 1)
	{
		cout << "Find some money. Gain " << POUND << 20 << endl;
		return 20;
	}
	if (diceThrow == 2)
	{
		cout << "Win a coding competition. Gain " << POUND << 50 << endl;
		return 50;
	}
	if (diceThrow == 3)
	{
		cout << "Recieve a rent rebate. Gain " << POUND << 100<< endl;
		return 100;
	}
	if (diceThrow == 4)
	{
		cout << "Win the lottery. Gain " << POUND << 150<< endl;
		return 150;
	}
	if (diceThrow == 5)
	{
		cout << "Sell your ipad. Gain " << POUND << 200 << endl;
		return 200;
	}
	else
	{
		cout << "It's your birthday. Gain " << POUND << 300<< endl;
		return 300;
	}
}

istream& operator>>(istream& inputStream, CBonus& bonus)
{
	return inputStream;//returns the data from the input
}
