#pragma once
//Connor Michael Page
#include <iostream>
#include "CPlayer.h"
using namespace std;
class CSquare
{
protected:
	string name;
	const char  POUND = 156;//£ symbol
public:
	CSquare(istream& file);
	friend istream& operator >> (istream& inputStream, CSquare& square);//function used for the input of data from txt file to object
	friend ostream& operator << (ostream& outputStream, const CSquare& square);

	virtual int TileStatus(CPlayer* player,CPlayer* otherPlayer, int diceThrow) = 0;//pure virtual function
};

