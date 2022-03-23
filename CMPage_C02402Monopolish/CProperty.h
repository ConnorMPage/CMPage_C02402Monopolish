#pragma once
//Connor Michael Page
#include "CSquare.h"
class CProperty :
    public CSquare
{
protected:
    //variables below contain information for object name,prices and ownership
    string mNamePart2;
    int mCost=0;
    int mRent=0;
    int mColourGroup=0;
    bool mIsOwned = false;
    string mPropertyOwner;
public:
    CProperty(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CProperty& property);//function used for the input of data from txt file to object
    
    virtual int TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow);//function for adding or subtracting money from player
};

