#pragma once
//Connor Michael Page
#include "CSquare.h"
class CBonus :
    public CSquare
{
public:
    CBonus(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CBonus& bonus);//function used for the input of data from txt file to object
    virtual int TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow);//function for adding or subtracting money from player
};

