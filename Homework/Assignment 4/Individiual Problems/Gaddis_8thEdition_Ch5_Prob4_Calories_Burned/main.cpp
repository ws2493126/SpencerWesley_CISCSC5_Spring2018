/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 29, 2018, 3:30 PM
 * Purpose: To use loops to determine how many calories burned per minute
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int  burn, min;
    
    //Intro    
    cout<<"The list below displays how much calories are burned"<<endl
            <<"every 5 minutes in a 30 minute period at a rate"<<endl
            <<"of 3.6 calories per minute."<<endl;
        cout<<"====================================================="<<endl;
    
    //Process/Calculations Here
    for (burn=18, min=5; burn<=110, min<=30; burn+=18, min+=5)
    {      

        {
            cout<<burn<<" calories in "<<min<<" minutes"<<endl;
        }

    }
    
    //Output Located Here
        


    //Exit
    return 0;
}

