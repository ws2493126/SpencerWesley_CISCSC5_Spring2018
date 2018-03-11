/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March, 2018, 12:30 PM
 * Purpose:  Calculate Celsius to Fahrenheit
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float            F,     //Fahrenheit
                     C,     //Celsius
                     temp;
   
          

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program converts Celsius into Fahrenheit."<<endl
            <<"Please input the temperature in Celsius."<<endl;
    cin>>C;
    
    //Calculations
    temp=C*9/5;
    F=temp+32;

    //Display Outputs
    cout<<"The temperature is "<<F<<" degrees Fahrenheit."<<endl;
            
    
    //Exit program!
    return 0;
}