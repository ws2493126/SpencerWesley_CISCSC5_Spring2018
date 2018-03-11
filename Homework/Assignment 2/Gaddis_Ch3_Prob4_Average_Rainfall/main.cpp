/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 11, 2018, 1:50 PM
 * Purpose:  To calculate average rainfall for 3 months.
 */

//System Libraries
#include <iostream>
#include <string>

using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    string   month1,
             month2,
             month3;
    
    float    inches1,
             inches2,
             inches3,
             temp,
             average;

 
       

    
            
    
    //Initialize Variables

            

            
    
    //Process/Map inputs to outputs
    cout<<"This program calculates the average rainfall of three months of"<<endl
            <<"your choice in inches."<<endl;
    cout<<" "<<endl;
    cout<<"What is the name of the first month?"<<endl;
    getline(cin, month1);
    cout<<"How many inches of rain in "<<month1<<" occurs?"<<endl;
    cin>>inches1;
    cout<<"What is the name of the second month?"<<endl;
    getline(cin, month2);
    getline(cin, month2);
    cout<<"How many inches of rain in "<<month2<<" occurs?"<<endl;
    cin>>inches2;
    cout<<"What is the name of the third month?"<<endl;
    getline(cin, month3);
    getline(cin, month3);
    cout<<"How many inches of rain in "<<month3<<" occurs?"<<endl;
    cin>>inches3;
    
    temp=inches1+inches2+inches3;
    average=temp/3;
    
    cout<<"The average rainfall for "<<month1<<" "<<month2<<" and "<<month3<<
            " is "<<average<<" inches."<<endl;
            
    
    
    
 
            

    
    
    //Output data
   
            
            
    
    //Exit stage right!
    return 0;
}