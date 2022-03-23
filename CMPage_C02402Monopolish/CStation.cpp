//Connor Michael Page
#include "CStation.h"

CStation::CStation(istream& file):CSquare(file)//constructer 
{
    file >> *this;
}
// virtual function for addition and subtraction of the players money
int CStation::TileStatus(CPlayer* player, CPlayer* otherPlayer, int diceThrow)
{
    if (mIsOwned == false)//checks if station is owned
    {
        if (player->GetPlayerMoney() > 0)//if playermoney is greater than 0
        {
            mStationOwner = player->GetPlayerName();//sets the owner to the players name
            cout << player->GetPlayerName() << " buys " << name << " " << POUND << mStationCost << endl;
            mIsOwned = true;//stes is owned to true
            return -mStationCost;//deducts the
        }
        else//if the player cant afford
        {
            return 0;//returns 0
        }

    }
    else//if the station is owned
    {
        if (mStationOwner != player->GetPlayerName())//if the player name doesnt match the owners name
        {
            cout << player->GetPlayerName() << " pays " << POUND << mStationFee << " for ticket" << endl;
            otherPlayer->EditPlayerMoney(mStationFee);//adds the rent to the other players class
            return -mStationFee;//returns the ticket fee
        }
        else//if the names match
        {
            return 0;//return 0
        }

    }
}
//used for the input of data into the object
istream& operator>>(istream& inputStream, CStation& station)
{
    inputStream >> station.mNamePart2;//gets the second part of the name
    station.name = station.name + " " + station.mNamePart2;//combines the name 
    return inputStream;//returns the inputstream
}
