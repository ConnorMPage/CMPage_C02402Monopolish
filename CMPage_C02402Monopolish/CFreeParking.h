#pragma once
//Connor Michael Page
#include "CSquare.h"
class CFreeParking :
    public CSquare
{
protected:
	string mNamePart2;//string for the second part of the name
public:
	CFreeParking(istream& file);//object constructer
	friend istream& operator >> (istream& inputStream, CFreeParking& freeParking);//function used for the input of data from txt file to object
	virtual int TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow);//function for adding or subtracting money from player
};

