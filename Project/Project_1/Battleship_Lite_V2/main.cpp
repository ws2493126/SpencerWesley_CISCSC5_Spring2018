/* 
 * File:   main.cpp
 * Author: 
 * Created on 
 * Purpose:  
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
    int     EShori1=rand()%4+1,  //This determines the ships' horizontal position
            ESvert1=rand()%4+1;  //This determines the ships' vertical position    
    
    
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
            case 2:
            cout<<" "<<endl;
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
            cout<<"Press any key to continue."<<endl;
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
    while (menu<1||menu>1);  //Anything that
    
    //Intro
    switch (menu)
    {
        case 1:
        cout<<"What is your name?"<<endl;
        cin>>player;
        cout<<"Good day, Admiral "<<player<<"."<<endl;
        cout<<"Today you are engaging an enemy ship,"<<endl
                <<"led by Admiral "<<enemyn<<"."<<endl;
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
            cout<<"  1 2 3 4 5"<<endl;
            cout<<"1 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"2 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"3 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"4 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            cout<<"5 "<<water<<" "<<water<<" "<<water<<" "<<water<<" "<<water<<endl;
            
            {
                cout<<"DEBUG - "<<EShori1<<" "<<ESvert1<<endl;
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
                        break;
                    }
                    else
                    {   
                        cout<<"Miss!"<<endl;
                    }
                    if (ammo==0)
                    {
                    cout<<"Mission Failed!"<<endl<<"Failed to destroy "<<enemyn<<"'s ship!"<<endl;
                    cout<<" "<<endl;
                        if (enemyv==1)
                        {
                            cout<<"Templar: Maybe next time, put a little more effort, ya?"<<endl;
                        }
                        if (enemyv==2)
                        {
                            cout<<"Baker: Not good enough to finish me off?"<<endl;
                        }
                        if (enemyv==3)
                        {
                            cout<<"Vector: How did someone like YOU become admiral?!"<<endl;
                        }
                        if (enemyv==4)
                        {
                            cout<<"Harris: Yeah, those missed shots make great fireworks."<<endl;
                        }
                        if (enemyv==5)
                        {
                            cout<<"Marshall: And here I thought I was gonna die here."<<endl;
                        }
                    cout<<" "<<endl;
                    cout<<"Press any key to continue."<<endl;
                    cin.ignore();
                    cin.get();    
                    cout<<"Score = 0"<<endl;
                    }
                }
                
            }
        }
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        ofstream outFile;
        outFile.open("list.txt");
        bool victor;
        {
            if ((hc==EShori1)&&(vc==ESvert1))
            {
                victor=true;
            }
            else
            {
                victor=false;
            }
        }
        {
            if (victor=true)
            {
            outFile<<"DEFEAT"<<endl;
            }
            if (victor=false)
            {
            outFile<<"VICTORY"<<endl;
            }
        }         
    }
    //Map/Process Inputs to Outputs

    //Display Outputs
    

    
    //Exit program!
    return 0;
}