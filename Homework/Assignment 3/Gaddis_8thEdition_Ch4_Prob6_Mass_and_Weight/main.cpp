/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 21, 2018, 5:00 PM
 * Purpose:  To calculate weight with mass inputted from the user.
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
    float     mass,
              weight,
              modify=9.8;
            
            

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program can calculate weight of an object with the mass"<<endl
            <<"inputted by the user."<<endl;
    cout<<" "<<endl;
    cout<<"Please input a mass."<<endl;
    cin>>mass;
    
    weight=mass*modify;
    
    if (weight>1000)
    {
        cout<<"The object is too heavy."<<endl;
    }
    
    else if (weight<10)
    {
        cout<<"The object is too light."<<endl;
    }
    
    else
    {
        cout<<"The object weighs "<<weight<<" newtons."<<endl;
    }
   

    //Display Outputs
    
    //Exit program!
    return 0;
}