/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 22, 2018, 4:30 PM
 * Purpose:  To mix paint and determine what you get.
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <limits>
#include <string>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string  color1,
            color2;
   

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program can determine which secondary color you get when mixed"
            <<endl<<" with primary colors dictated by the user."<<endl;
    cout<<"Primary colors are: Red, Blue, and Yellow."<<endl;
    cout<<" "<<endl;
    
            
    cout<<"Input first color."<<endl;
    cin>>color1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Input second color."<<endl;
    cin>>color2;

    
    
    //Mixing Process
    if (((color1=="Red")&&(color2=="Blue"))||((color1=="Blue")&&(color2=="Red")))
        cout<<"Your selection makes Purple."<<endl;
    else if (((color1=="red")&&(color2=="blue"))||((color1=="blue")&&(color2=="red")))
        cout<<"Your selection makes Purple."<<endl;
            
    
    else if (((color1=="Red")&&(color2=="Yellow"))||((color1=="Yellow")&&(color2=="Red")))
        cout<<"Your selection makes Orange."<<endl;
    else if (((color1=="red")&&(color2=="yellow"))||((color1=="yellow")&&(color2=="red")))
        cout<<"Your selection makes Orange."<<endl;
    
    else if (((color1=="Blue")&&(color2=="Yellow"))||((color1=="Yellow")&&(color2=="Blue")))
        cout<<"Your selection makes Green."<<endl;
    else if (((color1=="blue")&&(color2=="yellow"))||((color1=="yellow")&&(color2=="blue")))
        cout<<"Your selection makes Green."<<endl;
    
    else
        cout<<"Invalid selection. Try again."<<endl;
    

            
            

    //Display Outputs
    
    //Exit program!
    return 0;
}