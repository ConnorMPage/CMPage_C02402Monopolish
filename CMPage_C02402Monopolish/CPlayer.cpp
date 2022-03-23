//Connor Michael Page
#include "CPlayer.h"
//accepts a string for setting the playerName variable 
void CPlayer::SetPlayerName(string name)
{
	playerName = name;
}

//this function is used for outputting the name of the current player 
string CPlayer::GetPlayerName()
{
	return playerName;//returns the player name
}
//this function is used for the outputting of the amount of money the player has
int CPlayer::GetPlayerMoney()
{
	return playerMoney;//returns playerMoney
}
//for getting the location of the player
int CPlayer::GetPlayerPosition()
{
	return boardLocation;//returns the boardLocation variable 
}

//go to jail function used for editing the player location to the jail tile
void CPlayer::GoToJail()
{
	boardLocation = 6;//tile num 6 the jail tile
}
//for the adding and subtracting of the players money 
void CPlayer::EditPlayerMoney(int amount)
{
	playerMoney += amount;//for subtraction the amount vairable will be a minus number
}
//the player movenment around the board
void CPlayer::PlayerMovement(int diceNum)
{
	int previousPosition = boardLocation;//gets the previous location
	boardLocation += diceNum;
	if ((previousPosition + diceNum) > 25)//checks if the value will be over 25 
	{
		int positionDifference = (previousPosition + diceNum) - 25;//gets the tile value for after surpassing 25
		boardLocation = positionDifference - 1;//removes 1 as vectors start with an index of 0
		cout << playerName << " passes Go and collects "<<POUND << 200 << endl;
		playerMoney += 200;//adds 200 to playerMoney
	}
}
