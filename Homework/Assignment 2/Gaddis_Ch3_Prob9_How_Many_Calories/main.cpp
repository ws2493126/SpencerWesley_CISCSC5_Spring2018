/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 11, 2018, 1:30 PM PM
 * Purpose:  To calculate the amount of calories consumed base on amount of
 *           cookies eaten.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float   cal,    //Calories per cookie
            cook,   //Cookies
            totcal; //Total Calories
           
       

    
            
    
    //Initialize Variables
    cal=100;

            

            
    
    //Process/Map inputs to outputs
    cout<<"There are 10 servings in a 30 cookie bag, which each serving"<<endl
            <<"being 300 calories each. How many cookies have you eaten?"<<endl;
    cin>>cook;
    
    totcal=cook*cal;
    
    cout<<"You have consumed "<<totcal<<" calories."<<endl;
            
 
            

    
    
    //Output data
   
            
            
    
    //Exit stage right!
    return 0;
}