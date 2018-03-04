/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on February 26, 2018, 9:00 PM
 * Purpose:  Calculating selling price of circuit board.
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float   costprc,
            sellprc,
            prftper,
            prftamt;
            

    
            
    
    //Initialize Variables
    costprc=14.95;
    prftper=0.35;
            

            
    
    //Process/Map inputs to outputs
    prftamt=costprc*prftper;
    sellprc=prftamt+costprc;

    
    
    //Output data
    cout<<setprecision(4)<<"The selling price of a single circuit board is $"
            <<sellprc<<"."<<endl;
           


            
            
    
    //Exit stage right!
    return 0;
}