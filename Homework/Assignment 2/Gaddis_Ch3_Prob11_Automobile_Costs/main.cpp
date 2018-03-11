/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 8, 2018, 12:06 PM
 * Purpose:  To calculate the monthly and annual cost of an automobile
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
    float   loanpay,    //Payment for the loan per month
            insure,     //Payment for the insurance per month
            gas,        //Payment for the gas per month
            oil,        //Payment for oil per month
            tires,      //Payment for tires per month
            maint,      //Payment for maintenance per month
            costmon,    //Cost per month
            costyr;     //Cost per year
    
    unsigned char monyr=12; //Conversion from 12 months to 1 year.
            

    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program calculates the monthly and annual cost for"<<endl
            <<"for an automobile."<<endl;
    cout<<"======================================================="<<endl;
    cout<<"Please insert how much you pay per month for the loan."<<endl;
    cin>>loanpay;
    cout<<"Please insert how much you pay per month for the insurance."<<endl;
    cin>>insure;
    cout<<"Please insert how much you pay per month for the gas."<<endl;
    cin>>gas;
    cout<<"Please insert how much you pay per month for oil."<<endl;
    cin>>oil;
    cout<<"Please insert how much you pay per month for the tires."<<endl;
    cin>>tires;
    cout<<"Please insert how much you pay per month for maintenance."<<endl;
    cin>>maint;
    
    //Calculations
    costmon=loanpay+insure+gas+oil+tires+maint;
    costyr=costmon*monyr;
            
    //Display Outputs
    cout<<"Monthly Cost for Automobile:    $"<<costmon<<endl;
    cout<<"Annual Cost for Automobile:     $"<<costyr<<endl;
    
    //Exit program!
    return 0;
}