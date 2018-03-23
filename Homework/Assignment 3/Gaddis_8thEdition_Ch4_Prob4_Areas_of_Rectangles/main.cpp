/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 16, 2018, 10:30 AM
 * Purpose:  To determine which rectangle's area is greater.
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
    float   area1,
            length1,
            width1,
            area2,
            length2,
            width2;
    

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program can calculate which rectangle's area is greater"
            <<" from values inputted from the user."<<endl;
    cout<<" "<<endl;
    cout<<"Please input the width of the first rectangle."<<endl;
    cin>>width1;
    cout<<"Please input the length of the first rectangle."<<endl;
    cin>>length1;
    cout<<"Please input the width of the second rectangle."<<endl;
    cin>>width2;
    cout<<"Please input the length of the second rectangle."<<endl;
    cin>>length2;
    
    area1=length1*width1;
    area2=length2*width2;
    
    if (area1 > area2)
        cout<<"The first rectangle has the most area."<<endl;
    if (area2 > area1)
        cout<<"The second rectangle has the most area."<<endl;
    if (area1 == area2)
        cout<<"Both rectangles have the same area."<<endl;
    

    //Display Outputs
    
    //Exit program!
    return 0;
}