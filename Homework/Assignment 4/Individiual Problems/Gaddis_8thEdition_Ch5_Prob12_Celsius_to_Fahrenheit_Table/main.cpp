/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 1, 2018, 1:30 PM
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
    float            F,     //Fahrenheit
                     C=1,     //Celsius
                     temp;
   
          

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program converts Celsius into Fahrenheit using loops."<<endl
            <<"Results will be displayed on a table below."<<endl;
    cout<<"Celsius       Fahrenheit"<<endl;
         cout<<"========================"<<endl;
    
    
    

    //Display Outputs
    for (C=1; C<=20; C+=1)
    {
         temp=C*9/5;
         F=temp+3;
         cout<<C<<"             "<<F<<endl;
    }
    
    
    
    
    
    //Exit program!
    return 0;
}