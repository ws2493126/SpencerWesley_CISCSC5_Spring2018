/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 29, 2018, 4:00 PM
 * Purpose:  To use loops to display ASCII codes
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
    char num;

    //Initial Variables
    for (num=32; num<127; num++)
    {
        cout<<num;
    if (num==47)
        break;
    }
    cout<<endl;
    for (num=48; num<127; num++)
    {
        cout<<num;
    if (num==63)
        break;
    }
    cout<<endl;
    for (num=64; num<127; num++)
    {
        cout<<num;
    if (num==79)
        break;
    }
    cout<<endl;
    for (num=80; num<127; num++)
    {
        cout<<num;
    if (num==95)
        break;
    }
    cout<<endl;
    for (num=96; num<127; num++)
    {
        cout<<num;
    if (num==111)
        break;
    }
    cout<<endl;
    for (num=112; num<128; num++)
    {
        cout<<num;
    if (num==127)
        break;
    }
    
    
    
        
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
    return 0;
}