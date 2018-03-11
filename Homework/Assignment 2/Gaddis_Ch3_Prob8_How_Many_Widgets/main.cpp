/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 11, 2018, 3:40 PM
 * Purpose:  To calculate how many widgets are stacked on a pallet.
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float   palemp,  //Weight of the pallet when empty
            widweit, //Weight of each widget
            widnum,  //Number of widgets
            widtot,  //Weight of stack of widgets
            palful;  //Weight of the pallet with widgets

    
            
   //Initialize Variables
    widweit=12.5;

            

            
    
    //Process/Map inputs to outputs
    cout<<"This program calculates how many widgets are on a pallet,"<<endl            
            <<"each widget weighing 12.5 pounds each."<<endl;
    
    cout<<"How much does the pallet by itself weighs in pounds?"<<endl;
    cin>>palemp;
    cout<<"How much does the pallet stacked with widgets weigh in pounds?"<<endl;
    cin>>palful;
    
    widtot=palful-palemp;
    widnum=floor(widtot/widweit);
 

    
    //Output data
    cout<<"There are "<<widnum<<" widgets stacked on the pallet."<<endl;
            
            
    
    //Exit stage right!
    return 0;
}