#pragma once
//Connor Michael Page
#include "CSquare.h"
class CGoToJail :
    public CSquare
{
protected:
    //strings for a combined name
    string mNamePart2;
    string mNamePart3;
    int mFine = 50;//value for a fine
public:
    CGoToJail(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CGoToJail& goToJail);//function used for the input of data from txt file to object
    virtual int TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow);//function for adding or subtracting money from player
};

