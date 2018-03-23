/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 21, 2018, 5:45 PM
 * Purpose:  To create a game that asks for coins to make a dollar.
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
    float   penny=1,
            nickel=5,
            dime=10,
            quarter=25,
            dollar=100,
            
            pamount,
            namount,
            damount,
            qamount,
            
            ptotal,
            ntotal,
            dtotal,
            qtotal,
            
            sum;
    
    
  
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"This program will ask you to input how much pennies, nickels, dimes, and"<<
            endl<<" quarters in order to make a single dollar."<<endl;
    cout<<" "<<endl;
    cout<<"How many pennies?"<<endl;
    cin>>pamount;
    cout<<"How many nickels?"<<endl;
    cin>>namount;
    cout<<"How many dimes?"<<endl;
    cin>>damount;
    cout<<"How many quarters?"<<endl;
    cin>>qamount;
    
    ptotal=penny*pamount;
    ntotal=nickel*namount;
    dtotal=dime*damount;
    qtotal=quarter*qamount;
    sum=ptotal+ntotal+dtotal+qtotal;
    
    if (sum==dollar)
    {
        cout<<"The total value of coins you inputted equals a dollar."<<endl;
        cout<<"Congratulations."<<endl;
    }
    else if (sum<dollar)
    {
        cout<<"The total of value coins you inputted is less than a dollar."<<endl;        
    }
    else if (sum>dollar)
    {
        cout<<"The total of value coins you inputted is more than a dollar."<<endl;
    }
    
    
            
            

    
    
            
    
    
   

    //Display Outputs
    
    //Exit program!
    return 0;
}