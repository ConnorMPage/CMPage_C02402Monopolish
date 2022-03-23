//Connor Michael Page
#include "CPenalty.h"

CPenalty::CPenalty(istream& file):CSquare(file)//constructer
{
	file >> *this;
}

int CPenalty::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)
{
	// depending on the value produced in dicethrow a different message and value is outputted 
	if (diceThrow == 1)
	{
		cout << "Buy a coffee in Starbucks. Lose " << POUND << 20 << endl;
		return -20;
	}
	if (diceThrow == 2)
	{
		cout << "Pay your broadband bill. Lose " << POUND << 50 << endl;
		return -50;
	}
	if (diceThrow == 3)
	{
		cout << "Visit the SU shop for food. Lose  " << POUND << 100 << endl;
		return -100;
	}
	if (diceThrow == 4)
	{
		cout << "Buy an assignment solution. Lose " << POUND << 150 << endl;
		return -150;
	}
	if (diceThrow == 5)
	{
		cout << "Go for a romantic meal. Lose " << POUND << 200 << endl;
		return -200;
	}
	else
	{
		cout << "Pay some university fees. Lose " << POUND << 300 << endl;
		return -300;
	}
}

istream& operator>>(istream& inputStream, CPenalty& penalty)
{
	return inputStream;//returns the data from the input
}
