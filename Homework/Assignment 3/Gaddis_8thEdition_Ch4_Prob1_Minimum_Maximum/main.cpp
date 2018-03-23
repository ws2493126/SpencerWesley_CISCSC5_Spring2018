/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 16, 2018., 9:30 AM
 * Purpose:  To figure out which number is greater.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short num1, num2;

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program can determine which two numbers you input is the"
            <<" greatest."<<endl;
    cout<<"Please input the first number."<<endl;
    cin>>num1;
    cout<<"Please input the second number."<<endl;
    cin>>num2;
    
    if (num1 > num2)
            cout<<"The greater number is "<<num1<<"."<<endl;
    if (num2 > num1)
            cout<<"The greater number is "<<num2<<"."<<endl;
            
    

    //Display Outputs
    
    //Exit program!
    return 0;
}