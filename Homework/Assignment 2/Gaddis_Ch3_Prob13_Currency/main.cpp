/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 10, 2018, 6:30 PM
 * Purpose:  To convert U.S. Dollars into Euros and Yen.
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions
float   dty=98.93, //Dollars to Yen
        dte=0.74;  //Dollars to Euros
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float   euro,
            yen,
            dollar;
            

    
    //Initialize Variables
    
   
    
    //Process/Map inputs to outputs
    cout<<"This program converts U.S. Dollars into Yen and Euros."<<endl;
    cout<<" "<<endl;
    cout<<"Please input the amout of U.S. Dollars."<<endl;
    cin>>dollar;
    
    euro=dollar*dte;
    yen=dollar*dty;
    
    cout<<"$"<<dollar<<" is equivalent to:"<<endl;
    cout<<setprecision(4)<<euro<<"  Euros."<<endl;
    cout<<setprecision(6)<<yen<<"  Yen."<<endl;
 
            

    
    
    //Output data
  
    
    //Exit stage right!
    return 0;
}