/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 16, 2018, 10:00 AM
 * Purpose:  To find out if the date is a magical one.
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
    short month, day, year; 
            

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"The is program can determine whether or not the date you input"<<endl
            <<"is a magical date or not."<<endl;
    cout<<" "<<endl;
    cout<<"Please input the month in numeric form."<<endl;
    cin>>month;
    cout<<"please input the day."<<endl;
    cin>>day;
    cout<<"Please input the year in two-digit form."<<endl;
    cin>>year;
    
    if (month*day==year)
        cout<<"Congratulations, "<<month<<"/"<<day<<"/"<<year<<" is a"
                <<" magical date!"<<endl;
    else
        cout<<"Sorry, "<<month<<"/"<<day<<"/"<<year<<" is not a magical"
                <<" date."<<endl;

    //Display Outputs
    
    //Exit program!
    return 0;
}