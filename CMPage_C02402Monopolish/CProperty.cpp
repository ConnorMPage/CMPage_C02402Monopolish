//Connor Michael Page
#include "CProperty.h"

CProperty::CProperty(istream& file):CSquare(file)//constructer
{
    file >> *this;
}


//inputs the data from the txt file
istream& operator>>(istream& inputStream, CProperty& property)
{
    inputStream >> property.mNamePart2 >> property.mCost >> property.mRent >> property.mColourGroup;//gets the cost, rent and colour group
    property.name = property.name+" "+property.mNamePart2;//combines name
    return inputStream;//returns the input stream
}
//virtual function for the addition and subtraction of money form
int CProperty::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)
{
    if (mIsOwned == false)//checks if owned
    {
        if (player->GetPlayerMoney() > 0)//if the players money is above 0 then
        {
            mPropertyOwner = player->GetPlayerName();//sets the player as the property owner
            cout << player->GetPlayerName() << " buys " << name << " for " << POUND << mCost << endl;
            mIsOwned = true;//sets property to owned to true 
            return -mCost;//returns the cost
        }
        else//if cant afford
        {
            return 0;//returns 0
        }
       
    }
    else//if owned
    {
        if (mPropertyOwner != player->GetPlayerName())//if the player name doesnt match owner name
        {
            cout << player->GetPlayerName() << " pays " << POUND << mRent << endl;
            otherPlayer->EditPlayerMoney(mRent);//pays rent
            return -mRent;//subtract rent
        }
        else//if player name matches owner
        {
            return 0;//returns 0
        }

    }
    
}