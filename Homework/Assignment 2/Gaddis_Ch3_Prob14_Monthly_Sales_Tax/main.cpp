/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 11, 2018, 4:10 PM
 * Purpose:  To calculate sales tax.
 */

//System Libraries
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    string  month;  //Month of report
    
    float   total,  //Total money collected
            sales,  //Money collected from sales
            cst,    //Money for county sales tax
            cstper, //County sales tax in percent
            sst,    //Money for state sales tax
            sstper, //State sales tax in percent
            tst,    //Total taxes collected
            year;   //Year of report
    

    
    //Initialize Variables
    cstper=0.02;
    sstper=0.04;
            
   
    
    //Process/Map inputs to outputs
    cout<<"This program can provide a monthly sales tax report,"<<endl
            <<"with information provided by the user."<<endl;
    cout<<" "<<endl;
    cout<<"What is the month of the report?"<<endl;
    getline(cin, month);
    cout<<"What is the year of the report?"<<endl;
    cin>>year;
    cout<<"How much money is collected from sales, plus tax?"<<endl;
    cin>>total;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    cst=total*cstper;
    sst=total*sstper;
    tst=cst+sst;
    sales=total-tst;
    
    cout<<"Month: "<<month<<", "<<year<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Total Collected:        "<<total<<endl;
    cout<<"Sales:                  "<<sales<<endl;
    cout<<"County Sales Tax:       "<<cst<<endl;
    cout<<"State Sales Tax:        "<<sst<<endl;
    cout<<"Total Sales Tax:        "<<tst<<endl;
    
    
 
            

    
    
    //Output data
   
            
            
    
    //Exit stage right!
    return 0;
}