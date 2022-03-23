// CMPage_C02402Monopolish.cpp : This file contains the 'main' function. Program execution begins and ends there.
////Connor Michael Page
#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <fstream>
#include "CSquare.h"
#include "TileFactory.h"
#include <vector>
#include <ctime>
#include "CPlayer.h"
using namespace std;

int Random()
{//this function produces a int value between 1 - 6
    return static_cast<int>(static_cast<double> (rand()) / (RAND_MAX + 1) * 6.0f + 1);

}

int main()
{
    {
        const char POUND = 156;//£ symbol
        vector<CSquare*> squareList;//creates the squareList variable

        ifstream file("monopolish.txt");//inputs the infile name
        if (file.is_open())//checks if file has been opened 
        {
            while (file)// while not at the end of file
            {
                int tileType = 0;
                file >> tileType;//sets tiletype to num value from txt file
                if (tileType != 0)
                {
                    //create an object of the appropiate type
                    squareList.push_back(NewSquare(ETileType(tileType), file));
                }
            }
        }
        else//if file couldn't be opened
        {
             cout << "file couldnt be opened" << endl;
        }
        ifstream seedFile("seed.txt");//inputs the seed file
        int seedNum = 0;
        if (seedFile.is_open())//checks if file is open
        {
            
            seedFile >> seedNum;// inputs the seed into seedNum
        }
        else
        {
            cout << "seed file not open";
        }


        CPlayer* player1 = new CPlayer;// creates a new  cplayer class object
        player1->SetPlayerName("Hamster");//sets the player name
        
        
        CPlayer* player2 = new CPlayer;//creates a new cplayer class object
        player2->SetPlayerName("Pumpkin");//sets the player name
        
        
        
        cout << "Welcome to Monopol-ish" << endl << endl;

        srand(seedNum);//this seeds the random function to get the same set of numbers
        //main game loop
        for (int roundNum = 1; roundNum <= 20; roundNum++)//loops included code for 20 iterations
        {
            cout << "ROUND " << roundNum << endl << "========= " << endl;// outputs the round number

            //player 1 - beneath is all of the steps the player goes through each round
            int diceNum = Random();// sets a random num between 1-6 using random function
            cout << player1->GetPlayerName() << " rolls " << diceNum << endl;
            player1->PlayerMovement(diceNum);//sets the board location in the player class
            cout << player1->GetPlayerName() << " lands on " << *squareList[player1->GetPlayerPosition()] << endl;//outputs tile name
            diceNum = Random();//retreives a new random num
            player1->EditPlayerMoney(squareList[player1->GetPlayerPosition()]->TileStatus(player1, player2, diceNum));//edits the amount of player money, the amount depends on the output of the tile status virtual function
            cout << player1->GetPlayerName() << " has " << POUND << player1->GetPlayerMoney() << endl << endl;//outputs player money
            
            //repeats the exact same code as above but for the second player
            //player 2
            diceNum = Random();
            cout << player2->GetPlayerName() << " rolls " << diceNum << endl;
            player2->PlayerMovement(diceNum);
            cout << player2->GetPlayerName() << " lands on " << *squareList[player2->GetPlayerPosition()] << endl;
            diceNum = Random();
            player2->EditPlayerMoney(squareList[player2->GetPlayerPosition()]->TileStatus(player2, player1, diceNum));
            cout << player2->GetPlayerName() << " has " << POUND << player2->GetPlayerMoney() << endl << endl;

        }
        
        //---------------------------------------------
        //end of game
        //output messages 
        cout << "Game Over" << endl << "========= " << endl;
        cout << player1->GetPlayerName() << " " << player1->GetPlayerMoney() << endl;
        cout << player2->GetPlayerName() << " " << player2->GetPlayerMoney() << endl << endl;
        
        if (player1->GetPlayerMoney() > player2->GetPlayerMoney())//checks if player1 has a greater amount of money than player 2
        {
            cout << player1->GetPlayerName() << " Wins!" << endl;//if player1 has more than they win
        }
        else
        {
            cout << player2->GetPlayerName() << " Wins!" << endl;//if player2 has more than they win
        }
        
        for (auto tiles : squareList)
        {
            delete tiles;//deletes all the CSquare objects
        }
        delete player1;
        delete player2;
    }
    _CrtDumpMemoryLeaks();
}

 