#pragma once
//Connor Michael Page
#include "CSquare.h"
class CGo :
    public CSquare
{
public:
    CGo(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CGo& go);//function used for the input of data from txt file to object
    virtual int TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow);//function for adding or subtracting money from player
};

