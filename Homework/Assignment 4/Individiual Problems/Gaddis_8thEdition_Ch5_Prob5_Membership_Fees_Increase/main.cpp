/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 1, 2018, 6:00 PM
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
    float   incrper=0.04,    //Increase in percentage
            mbership=2500;   //Price in membership
    
    int     years=6,
            forloop;         //Variable for loop
    
    //Cout before loop
    cout<<"Year         Membership Price"<<endl;
    cout<<"============================="<<endl;
            
   //Map/Process Inputs to Outputs
    for (forloop=1; forloop<=years; forloop++)
    {
        mbership=mbership+(mbership*incrper);
        cout<<forloop<<"            $"<<mbership<<endl;
    }
    
   

    //Display Outputs
    
    //Exit program!
    return 0;
}