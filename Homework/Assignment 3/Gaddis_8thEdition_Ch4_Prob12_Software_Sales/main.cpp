/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 20, 2018 4:00 PM
 * Purpose:  To determine discount based on quantity bought.
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
    float   package=99,   //Base price for a single package
            dis20=0.20,   //20% discount for purchasing 10-19
            dis30=0.30,   //30% discount for purchasing 20-49
            dis40=0.40,   //40% discount for purchasing 50-99
            dis50=0.50,   //50% discount for purchasing 100 or more
            bought,       //Amount bought
            final;        //Final price with discount
    

    //Ask for Input
    cout<<"This program can calculate total cost of the packages bought"
            <<endl<<"affected by the discount given by how much you bought."<<endl;
    cout<<" "<<endl;
    cout<<"Please input how much packages you bought."<<endl;
    cin>>bought;
            
            
    
    //Map/Process Inputs to Outputs
    if      (bought<=0)
    {
        cout<<"You haven't bought anything."<<endl;
    }
    else
    {
        if (bought<=9)
        {
             cout<<"You have not bought enough to get a discount."<<endl;
             final=package*bought;
             cout<<"Your cost is $"<<final<<"."<<endl;
        }
        else
        {
          if (bought<=19)
          {
             cout<<"You have bought enough to get a 20% discount."<<endl;
             final=package*bought*dis20;
             cout<<"Your cost is $"<<final<<"."<<endl;
          }        
            else
            {
                if (bought<=49)
                {
                    cout<<"You have bought enough to get a 30% discount."<<endl;
                    final=package*bought*dis30;
                    cout<<"Your cost is $"<<final<<"."<<endl;
                }
                else
                {
                    if (bought<=99)
                    {    
                        cout<<"You have bought enough to get a 40% discount."<<endl;
                        final=package*bought*dis40;
                        cout<<"Your cost is $"<<final<<"."<<endl;
                    }
                    else
                    {
                        if (bought>99)
                        {
                            cout<<"You have bought enough to get a 50% discount."<<endl;
                            final=package*bought*dis50;
                            cout<<"Your cost is $"<<final<<"."<<endl;
                        }
                        
                        
                    }
                 }
            }   
         }
      }    
    

      
    
   
           
       
    

    //Display Outputs
    
    //Exit program!
    return 0;
}