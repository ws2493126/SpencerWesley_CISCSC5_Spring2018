/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 1, 2018, 2:30 PM
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
    int     hori,
            vert;
            
    //Initial Variables
   
    
    //Map/Process Inputs to Outputs
    for (hori=1; hori<=10; hori++)
    {
        for (vert=1; vert<=hori; vert++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
    for (hori=10; hori>=0; hori--)
    {
        for (vert=0; vert<=hori; vert++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
   

    //Display Outputs
    
    //Exit program!
    return 0;
}