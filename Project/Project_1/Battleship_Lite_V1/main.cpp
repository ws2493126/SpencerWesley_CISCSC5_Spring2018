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
#include <cstring>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Random number seed
     srand(static_cast<unsigned int>(time(0)));
    
    //Sprites Selection
    char    water=126,    //Water, represented by "~"
            Fship=87,     //Your ship, represented by "W"
            miss=88,      //Missed shots, represented by "X"
            hit=79,       //Enemy Hit, represented by "0"
            Eship=126,    //Enemy ship, represented by "~", disguised as water
            dedship=33;   //Your ship, destroyed, represented by "!"
    
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
        cout<<"Battleship"<<endl;
        cout<<"==============="<<endl;
        cout<<"1. Play Game"<<endl;
        cout<<"2. Tutorial"<<endl;
        cout<<"3. End Program"<<endl;
    
        cin>>menu;
        
        if (menu<1||menu>3)
        {
            cout<<" "<<endl;
            cout<<"Invalid Selection."<<endl;
            cout<<" "<<endl;
        }
    }
    while (menu<1||menu>3);
    
    //Tutorial
    switch (menu)
    {
        case 2:
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<"Welcome to the tutorial for the Battleship game."<<endl;
        cout<<"The goal of the game is to guess where an enemy ship is on"<<endl;
        cout<<"the grid, and to destroy each one in the fleet in order to"<<endl;
        cout<<"achieve victory. Once you guess a location, a missile will"<<endl;
        cout<<"be fired upon that location."<<endl;
        cout<<" "<<endl;
        cout<<"Press any key to continue."<<endl;
        cin.ignore();
        cin.get();
        cout<<"Symbol Spreadsheet"<<endl;
        cout<<"=================="<<endl;
        cout<<water<<"    = Water"<<endl;
        cout<<Fship<<"    = Friendly Ship"<<endl;
        cout<<miss<<"    = Missed Shot"<<endl;
        cout<<hit<<"    = Enemy Ship Destroyed"<<endl;
        cout<<Eship<<"    = Enemy Ship, Same as Water for Concealment"<<endl;
        cout<<dedship<<"    = Friendly Ship Destroyed"<<endl;
        cout<<" "<<endl;
        cout<<"Press any key to continue."<<endl;
        cin.ignore();
        cin.get();
        
                
        
    }
    
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
        int hc;
        int vc;
        int ammo;
        for (ammo=9; ammo>=0; ammo--)
        {
            cout<<"  1 2 3 4 5"<<endl;
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
                    if ((hc==EShori1)&&(vc==ESvert1))
                    {
                        cout<<"Target Hit!"<<endl;
                        cout<<enemyn<<"'s ship has been blown to smithereens!"<<endl;
                        cout<<"Mission Accomplished!"<<endl;
                        break;
                    }
                    else
                    {   
                        cout<<"Miss!"<<endl;
                    }
                    if (ammo==0)
                    {
                    cout<<"Mission Failed!"<<endl<<"Failed to destroy "<<enemyn<<"'s ship!"<<endl;
                    }
                }
                
            }
        }
        
    
    }
    //Map/Process Inputs to Outputs

    //Display Outputs
    

    
    //Exit program!
    return 0;
}