/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on February 13, 2018, 4:00 PM
 * Purpose:  Calculate total price of items bought.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   i1,     //Item 1
            i2,     //Item 2
            i3,     //Item 3
            i4,     //Item 4
            i5,     //Item 5
            iT,     //Total price of all items
            tax,    //Tax for the purchase of items
            taxper, //Tax for the purchase of items, percentage
            ttltax; //Total price, including tax
    
            
    
    //Initialize Variables
    i1=15.95;
    i2=24.95;
    i3=6.95;
    i4=12.95;
    i5=3.95;
    taxper=0.07; //0.07=7%
            
    
    //Process/Map inputs to outputs
    iT=i1+i2+i3+i4+i5;
    tax=iT*taxper;
    ttltax=iT+tax;
            
    
    
    
    //Output data
    cout<<"Price of item one is $"<<i1<<"."<<endl;
    cout<<"Price of item two is $"<<i2<<"."<<endl;
    cout<<"Price of item three is $"<<i3<<"."<<endl;
    cout<<"Price of item four is $"<<i4<<"."<<endl;
    cout<<"Price of item five is $"<<i5<<"."<<endl;
    cout<<"The total price of all the items is $"<<iT<<endl;
    cout<<setprecision(3)<<"The tax amount is $"<<tax<<"."<<endl;
    cout<<setprecision(4)<<"the total price of all items, including tax is $"
            <<ttltax<<"."<<endl;
    
    
    //Exit stage right!
    return 0;
}