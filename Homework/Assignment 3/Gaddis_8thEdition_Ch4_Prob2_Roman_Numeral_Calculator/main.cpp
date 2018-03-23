/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 22, 2018, 5:30 PM
 * Purpose:  To calculate customer's monthly bill.
 *           
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
    float   monA=39.99,
            monB=59.99,
            monC=69.99,
            minA=450,
            minB=900,
            addminA=0.45,
            addminB=0.40,
            minutes;
    
    string  pkslct; //Package of choice

    
    //Map/Process Inputs to Outputs
    cout<<"This program can calculate monthly phone service bill by using the"
            <<endl<<"user's package of choice and the amount of minutes used."<<endl;
    cout<<"Package A: For $39.99 per month 450 minutes are provided. Additional minutes are"
            <<endl<<"$0.45 per minute."<<endl;
    cout<<"Package B: For $59.99 per month 900 minutes are provided. Additional minutes are"
            <<endl<<"$0.40 per minute."<<endl;
    cout<<"Package C: For $69.99 per month unlimited minutes provided."<<endl;
    cout<<" "<<endl;
    cout<<"Please pick a package."<<endl;
    cin>>pkslct;
    cout<<"How many minutes?"<<endl;
    cin>>minutes;
   

    //Display Outputs
    
    //Exit program!
    return 0;
}