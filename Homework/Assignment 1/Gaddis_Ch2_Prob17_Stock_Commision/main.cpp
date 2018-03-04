/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on February 25, 2018, 4:12 PM
 * Purpose:  Calculating amount paid for stocks and commissions.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Math/Physics Constants, Conversions,

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   asp,//Amount paid for a single stock alone
            ns, //Number of stocks bought
            atp,//Total amount paid for just stocks
            pc, //Percentage amount for the commission of the stockbroker
            ac, //Amount of commission of the stockbroker in dollars
            tp; //Total amount paid for the stock and commission
            
    
    //Initialize Variables
    asp=35;
    ns=750;
    pc=0.02; //2% = 0.02, stockbroker's cut
           
    
    //Process/Map inputs to outputs
    atp=asp*ns;
    ac=atp*pc;
    tp=atp+ac;
    
           
    
    
    //Output data
    cout<<"Amount paid for stocks alone = $"<<atp<<endl;
    cout<<"Amount paid in commissions for stockbroker = $"<<ac<<endl;
    cout<<"Total Amount paid in both stocks and commissions = $"<<tp<<endl;
            
    
    //Exit stage right!
    return 0;
}