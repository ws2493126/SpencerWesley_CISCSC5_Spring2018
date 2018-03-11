/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 8, 2018, 11:52 AM
 * Purpose:  To calculate Test Average
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float score1, score2, score3, score4, score5, average;

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This programs calculates the average five test scores,"<<endl<<
            "Please input the first score."<<endl;
    cin>>score1;
    cout<<"Please input the second score."<<endl;
    cin>>score2;
    cout<<"Please input the third score."<<endl;
    cin>>score3;
    cout<<"Please input the fourth score."<<endl;
    cin>>score4;
    cout<<"Please input the fifth score."<<endl;
    cin>>score5;
    
    //Calculations
    average=(score1+score2+score3+score4+score5)/5;

    //Display Outputs
    cout<<"The test average is "<<setprecision(3)<<average<<" points."<<endl;
            
           
    
    
    //Exit program!
    return 0;
}