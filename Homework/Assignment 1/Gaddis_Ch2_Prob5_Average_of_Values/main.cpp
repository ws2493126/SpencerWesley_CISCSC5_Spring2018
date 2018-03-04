/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on February 26, 2018, 8:10 PM
 * Purpose: To calculate the average of values
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float   num1,
            num2,
            num3,
            num4,
            num5,
            sum,
            average;
    
    
                
    //Initialize Variables
    num1=28;
    num2=32;
    num3=37;
    num4=24;
    num5=33;

            
    
    //Process/Map inputs to outputs
    sum=num1+num2+num3+num4+num5;
    average=sum/5;

    
    
    //Output data
    cout<<"The average number of the series 28, 32, 37, 24, 33"
            " is "<<average<<"."<<endl;
            

            
            
    
    //Exit stage right!
    return 0;
}