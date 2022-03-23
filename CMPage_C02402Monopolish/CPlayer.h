#pragma once
//Connor Michael Page
#include <iostream>
using namespace std;
class CPlayer
{
private:
	string playerName = "player";//the name of the player
	int playerMoney = 1500;//starting amount of player money
	const char POUND = 156;//declare a const for the £symbol
	int boardLocation = 0;//go location
public:
	void SetPlayerName(string name);//this fucntion accepts a string input  to set the playerName variable
	string GetPlayerName();//this function returns the playerName variable
	int GetPlayerMoney();//returns the playerMoney variable
	int GetPlayerPosition();//returns the boardLocation variable
	void GoToJail();//sets the board location to the jail tile
	void EditPlayerMoney(int amount);//accepts an int and adds the int variable to the playerMoney variable

	void PlayerMovement(int diceNum);//adds the diceNum to the boardLocation

};

