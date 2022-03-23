#pragma once
//Connor Michael Page
#include "CSquare.h"
class CStation :
    public CSquare
{
protected:
    //variables below are for the objects name.prices, ownership
    string mNamePart2;
    int mStationCost = 200;
    int mStationFee = 10;
    bool mIsOwned = false;
    string mStationOwner;
public:
    CStation(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CStation& station);//function used for the input of data from txt file to object
    virtual int TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow);//function for adding or subtracting money from player
};

