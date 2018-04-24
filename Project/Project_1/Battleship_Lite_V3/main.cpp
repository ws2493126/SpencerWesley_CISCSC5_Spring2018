/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 15, 2018
 * Purpose:  To create a battleship game
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <ctime>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Random number seed
     srand(static_cast<unsigned int>(time(0)));
    
    //Symbol Selection
    char    water=126;    //Water, represented by "~"
    
    //Input Player Name
    string  player;       //Player name
    
    
    //Enemy Ship Placement
    int     EShori1=rand()%4+1,  //This determines the ships' horizontal position [1-5]
            ESvert1=rand()%4+1;  //This determines the ships' vertical position [1-5]   
    
    
    //Potential Enemy Admiral Names, Selection Randomized
    int     enemyv=rand()%4+1;  //Number used for name selection in switch
    string  enemyn;             //Variable for randomized name
    
    switch (enemyv)
    {
        case 1: enemyn="Templar";break;
        case 2: enemyn="Baker";break;
        case 3: enemyn="Vector";break;
        case 4: enemyn="Harris";break;
        case 5: enemyn="Marshall";break;
    }
    
    //Main Menu
    int     menu; //Menu Selection Variable
    do
    {
        cout<<"Battleship Lite"<<endl;
        cout<<"====================="<<endl;
        cout<<"1. Play Game"<<endl;
        cout<<"2. Tutorial"<<endl;   //Picking 2 will loop back to this menu
    
        cin>>menu;
        
        if (menu<1||menu>2)  //Anything that is not 1 or 2 will be invalid
        {
            cout<<" "<<endl;
            cout<<"Invalid Selection."<<endl;
            cout<<" "<<endl;
        }
        switch (menu)         //Tutorial
        {
            case 2:           //Case 2 will load the tutorial section
            cout<<" "<<endl;  //Spaces are to make the output console a bit cleaner
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<"Welcome to the tutorial for the Battleship game."<<endl;
            cout<<"The goal of the game is to guess where an enemy ship is on"<<endl;
            cout<<"the grid, and to destroy it in order to"<<endl;
            cout<<"achieve victory. Once you select a location, a missile will"<<endl;
            cout<<"be fired upon that location."<<endl;
            cout<<" "<<endl;
            cout<<"Press any key to continue."<<endl; //Ask for any input to continue
                                                      //Makes output console a bit cleaner
            cin.ignore();
            cin.get();
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<" "<<endl;
            
        }
    }
    while (menu<1||menu>1);  //Anything that is not 1 will loop the menu
    
    //Intro
    switch (menu)
    {
        case 1:      //Case 1 will load the game, does not loop back to menu
        cout<<"What is your name?"<<endl;   //Ask for player name
        cin>>player;
        cout<<"Good day, Admiral "<<player<<"."<<endl;
        cout<<"Today you are engaging an enemy ship,"<<endl
                <<"led by Admiral "<<enemyn<<"."<<endl;    //Randomly selected enemy name
        cout<<"We have him on the run, destroy his ship before he can get away."<<endl;
        cout<<" "<<endl;
        cout<<"Press any key to continue."<<endl;
        cin.ignore();
        cin.get();
       
        //Game Loop
        int hc;       //Horizontal Coordinate
        int vc;       //Vertical Coordinate
        int ammo;
        for (ammo=9; ammo>=0; ammo--) //Increments downwards, starts at 9, but zero counts as a turn.
                                      //Player is given 10 tries in order to win.
        {
            cout<<"  1 2 3 4 5"<<endl;  //Grid is used for reference on where the enemy can be
            cout<<"1 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"2 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"3 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"4 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"5 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            
            {
                cout<<"Missile Loaded."<<endl;
                cout<<"Missiles in Reserve Remaining: "<<ammo<<endl;
                cout<<"Horizontal Coordinate?"<<endl;
                
                cin>>hc;
                cout<<"Vertical Coordinate?"<<endl;
                
                cin>>vc;
                {
                    if ((hc==EShori1)&&(vc==ESvert1))  //If both Coordinates are the same as
                                                       //the enemy, this triggers the win.
                    {
                        cout<<"Target Hit!"<<endl;
                        cout<<enemyn<<"'s ship has been blown to smithereens!"<<endl;
                        cout<<"Mission Accomplished!"<<endl;
                        cout<<" "<<endl;
                        cout<<"Press any key to continue."<<endl;
                        cin.ignore();
                        cin.get();
                        float score=pow((ammo+2.5), 1.8); //Score is affected by how many missiles are left
                        cout<<"Score = "<<setprecision(2)<<score<<endl; //Setprecision is used to round off the score
                        break;    //Break is used so this loop can end early if the player wins
                    }
                    else
                    {   
                        cout<<"Miss!"<<endl;  //This occurs when the player guesses incorrectly
                    }
                    if (ammo==0)
                    {
                    cout<<"Mission Failed!"<<endl<<"Failed to destroy "<<enemyn<<"'s ship!"<<endl;
                    cout<<" "<<endl;   //Each admiral has their own taunt, purely cosmetic
                                       //After the player loses, one of these lines will appear
                        if (enemyv==1) //If Templar was selected in the beginning
                        {
                            cout<<"Templar: Maybe next time, put a little more effort, ya?"<<endl;
                        }
                        if (enemyv==2) //If Baker was selected in the beginning
                        {
                            cout<<"Baker: Not good enough to finish me off?"<<endl;
                        }
                        if (enemyv==3) //If Vector was selected in the beginning
                        {
                            cout<<"Vector: How did someone like YOU become admiral?!"<<endl;
                        }
                        if (enemyv==4) //If Harris was selected in the beginning
                        {
                            cout<<"Harris: Yeah, those missed shots make great fireworks."<<endl;
                        }
                        if (enemyv==5) //If Marshall was selected in the beginning
                        {
                            cout<<"Marshall: And here I thought I was gonna die here."<<endl;
                        }
                    cout<<" "<<endl;
                    cout<<"Press any key to continue."<<endl;
                    cin.ignore();
                    cin.get();    
                    cout<<"Score = 0"<<endl; //Score is predetermined if player loses, gets none
                    }
                }
                
            }
        }
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        ofstream outFile;          //Writing to file
        outFile.open("result.txt");
        bool victor;
        {
            if ((hc==EShori1)&&(vc==ESvert1)) //Bool is true if player wins
            
                victor=true;
            
            else
            
                victor=false;                 //Bool is false if player loses
            
        }
        {
            if (victor==1)                 
            {
            outFile<<"VICTORY"<<endl;         //Victory is written to file
            }
            if (victor==0)
            {
            outFile<<"DEFEAT"<<endl;          //Defeat is written to file
            }
        }
        outFile.close();
    }
    //Map/Process Inputs to Outputs

    //Display Outputs
    

    
    //Exit program!
    return 0;
}