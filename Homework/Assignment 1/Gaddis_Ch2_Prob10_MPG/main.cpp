/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on February 24, 2018, 5:35 PM
 * Purpose:  Calculating Miles per Gallon
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   MPG,     //Miles per Gallon
            gastank, //How much gas the tank holds
            dstance; //How far the car goes on a single tank of gas
    
    //Initialize Variables
    gastank=15.0f;
    dstance=375.0f;
    
    //Process/Map inputs to outputs
    MPG=dstance/gastank;
    
    //Output data
    cout<<"The car holds "<<gastank<<" gallons of gas."<<endl;
    cout<<"The car travel "<<dstance<<" miles on a single tank of gas."<<endl;
    cout<<"The car can travel "<<MPG<<" miles on a single gallon of gas."<<endl;
            
    
    //Exit stage right!
    return 0;
}