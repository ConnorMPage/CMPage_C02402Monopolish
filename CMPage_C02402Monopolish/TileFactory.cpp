#include "TileFactory.h"
#include "CGo.h"
#include "CProperty.h"
#include "CStation.h"
#include "CBonus.h"
#include "CPenalty.h"
#include "CJail.h"
#include"CGoToJail.h"
#include "CFreeParking.h"
//Connor Michael Page
//creates new subobjects of cSquare
CSquare* NewSquare(ETileType tile, istream& file)
{
	CSquare* squarePtr = nullptr;//creates a pointer to the CSquare class
	//dependant on the int value in the txt file the pointer will become a new object of the derived classes 
	switch (tile)
	{
	case ETileType::Property:
	{
		squarePtr = new CProperty(file);// runs the object contructer

		break;
	}
	case ETileType::Go:
	{
		squarePtr = new CGo(file);
		break;
	}
	
	case ETileType::Station:
	{
		squarePtr = new CStation(file);
		break;
	}
	case ETileType::Bonus:
	{
		squarePtr = new CBonus(file);
		break;
	}
	case ETileType::Penalty:
	{
		squarePtr = new CPenalty(file);
		break;
	}
	case ETileType::Jail:
	{
		squarePtr = new CJail(file);
		break;
	}
	case ETileType::GoToJail:
	{
		squarePtr = new CGoToJail(file);
		break;
	}
	case ETileType::FreeParking:
	{
		squarePtr = new CFreeParking(file);
		break;
	}
	default:
	{
		break;
	}
	return squarePtr;//returns the chosen object
	
	}
}
