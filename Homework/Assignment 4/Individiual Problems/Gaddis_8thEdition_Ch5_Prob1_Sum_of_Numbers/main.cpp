/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 1, 2018, 1:00 PM
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
    int     num,
            start=1,
            sum=0;
    
            
    
    //Map/Process Inputs to Outputs
    cout<<"This program can calculate the sum of numbers from 1 to the"
            <<endl<<"number that the user inputs."<<endl;
    cout<<" "<<endl;
    cout<<"Please input a positive number."<<endl;
    cin>>num;
    cout<<" "<<endl;
    
    if (num>=1)
        for (int n=start; n<=num; n++)
        {
            sum+=n;
            cout<<sum<<endl;
        }
    
    else
        cout<<"Invalid input, please try again."<<endl;

        
                
            
       

    //Display Outputs
    
    //Exit program!
    return 0;
}