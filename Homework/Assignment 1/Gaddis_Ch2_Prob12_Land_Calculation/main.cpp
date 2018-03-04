/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on February 24, 2018, 5:20 PM
 * Purpose:  Calculate number of acres.
 */

//System Libraries
#include <iostream>
#include <cmath> //celing function
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   oneacre, //A single acre of land
            land,    //Total number of land
            nmbacre; //Number of acres of land
            
            
            
    
    
    //Initialize Variables
    oneacre=43560;
    land=391876;
    
    //Process/Map inputs to outputs
    nmbacre=ceil(land/oneacre);
    
    
    //Output data
    cout<<"A single acre is "<<oneacre<<" square feet."<<endl;
    cout<<"Total land area is "<<land<<" square feet."<<endl;
    cout<<"There are "<<nmbacre<<" acres of land in the area."<<endl;
            
    
    //Exit stage right!
    return 0;
}