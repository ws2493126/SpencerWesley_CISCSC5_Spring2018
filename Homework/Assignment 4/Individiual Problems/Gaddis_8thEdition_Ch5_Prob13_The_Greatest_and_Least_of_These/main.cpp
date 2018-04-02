/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 1, 2018, 4:00 PM
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
    int     num=0,
            great,
            least,
            deter=0;
            
   

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program can determine which of the numbers you input are the"
            <<endl<<"greatest and the least."<<endl;
    cout<<" "<<endl;
    
    while (num !=-99)
    {
        cout<<"Please input a number. Input -99 when you put in all the numbers you want."
            <<endl;
        cin>>num;
        if (deter==0)
        {
            great=num;
            least=num;
        }
        else
        {
            if (num>great&&num !=-99)
                great=num;
            else if(num<least&&num !=-99)
                least=num;
        }
        deter++;
    }
    cout<<"Greatest number:    "<<great<<endl;
    cout<<"Least number:       "<<least<<endl;
   

    //Display Outputs
    
    //Exit program!
    return 0;
}