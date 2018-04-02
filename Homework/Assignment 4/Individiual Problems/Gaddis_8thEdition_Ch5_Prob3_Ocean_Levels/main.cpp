/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 29, 2018, 3:00 PM
 * Purpose: To use loops to determine the ocean level in 25 years.
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
    float   rise;


    
    //Intro    
    cout<<"The list below displays how much the ocean level rises"<<endl
                <<"in the next 25 years."<<endl;
        cout<<"======================================================"<<endl;
    
    //Process/Calculations Here
    for (rise=1.5; rise<=38; rise+=1.5)
    {        
        cout<<rise<<" millimeters"<<endl;
    }
    
    //Output Located Here
        


    //Exit
    return 0;
}

