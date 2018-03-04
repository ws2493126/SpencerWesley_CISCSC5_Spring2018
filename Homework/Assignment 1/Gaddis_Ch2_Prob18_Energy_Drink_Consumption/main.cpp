/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on February 26, 2018, 7:50 PM
 * Purpose:  To calculate how much people drink energy drinks,
 *           and the citrus flavor
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float   sftdrnk, //All the drinks the company produced
            engdrnk, //Energy drinks, all flavors, percentage
            ctsdrnk, //Just the citrus flavor energy drink, percentage
            engnum,  //Number of people who drink energy drinks
            ctsnum;  //Number of people who drink citrus flavor energy drink
    
            
    
    //Initialize Variables
    sftdrnk=16500;
    engdrnk=0.15; //0.15=15%
    ctsdrnk=0.58; //0.58=58%
            
    
    //Process/Map inputs to outputs
    engnum=sftdrnk*engdrnk;
    ctsnum=ceil(engnum*ctsdrnk);
    
    
    //Output data
    cout<<"The approximate number of customers who purchase"
            " energy drinks is "<<engnum<<"."<<endl;
    cout<<"The approximate number of customers who purchase"
            " citrus flavored energy drinks is "<<ctsnum<<"."<<endl;
            
            
    
    //Exit stage right!
    return 0;
}