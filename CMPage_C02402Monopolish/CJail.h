#pragma once
//Connor Michael Page
#include "CSquare.h"
class CJail :
    public CSquare
{
public:
    CJail(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CJail& jail);//function used for the input of data from txt file to object
    virtual int TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow);//function for adding or subtracting money from player
};

