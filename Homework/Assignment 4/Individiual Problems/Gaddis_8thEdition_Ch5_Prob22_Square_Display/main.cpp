/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on 
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
    int     size,
            hori,
            vert;
            
    //Initial Variables
    cout<<"Please enter a number to determine the dimensions of a Square Pattern"
            <<endl<<"comprised of the character X."<<endl;
    cout<<" "<<endl;
    cin>>size;
    cout<<" "<<endl;
    
    //Map/Process Inputs to Outputs
    for (hori=1; hori<=size; hori++)
    {
        for (vert=1; vert<=size; vert++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
   

    //Display Outputs
    
    //Exit program!
    return 0;
}