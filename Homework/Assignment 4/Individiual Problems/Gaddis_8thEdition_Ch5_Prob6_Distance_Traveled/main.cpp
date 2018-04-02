/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 1, 2018, 5:00 PM
 * Purpose:  
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
    float   dstance,
            speed,
            time;
    
    int     timefor;
   

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program can calculate how many miles traveled in an hour with"<<
            endl<<"information provided by the user."<<endl;
    cout<<" "<<endl;
    cout<<"How fast was the vehicle in Miles per Hour?"<<endl;
    cin>>speed;
    
    while (speed<=0)
    {
        cout<<"Invalid input, speed must be greater than 0."<<endl;
        cout<<"Try again."<<endl;
        cin>>speed;
    }
    cout<<"How many hours did the vehicle travel?"<<endl;
    cin>>time;
    
    while (time<1)
    {
        cout<<"Invalid input, amount of hours must be greater than 0."<<endl;
        cout<<"Try again."<<endl;
        cin>>time;
    }
    
    cout<<"Hour         Distance Traveled"<<endl;
    cout<<"================================="<<endl;
    
    for (timefor=1; timefor<=time; timefor++)
    {
        dstance=speed*timefor;
        cout<<timefor<<"            "<<dstance<<endl;
    }
    
            
   

    //Display Outputs
    
    //Exit program!
    return 0;
}