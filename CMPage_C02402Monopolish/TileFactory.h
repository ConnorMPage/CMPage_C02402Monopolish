#pragma once
//Connor Michael Page
#include "CSquare.h"

enum class ETileType : int//enum class for a switch case to determine the tile type
{
	Property = 1,
	Go = 2,
	Station = 3,
	Bonus = 4,
	Penalty = 5,
	Jail = 6,
	GoToJail =7,
	FreeParking = 8
};
CSquare* NewSquare(ETileType tile, istream& file);//function for adding or subtracting money from player
