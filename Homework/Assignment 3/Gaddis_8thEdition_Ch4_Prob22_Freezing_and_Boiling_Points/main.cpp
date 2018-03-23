/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 20, 2018, 3:00 PM
 * Purpose:  To figure out which substances will freeze and boil
 * at temperatures determined by user input.
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
    float   frzalc=-173,   //Freezing point of Ethyl Alcohol
            frzmrc=-38,    //Freezing point of Mercury
            frzoxy=-362,   //Freezing point of Oxygen
            frzwtr=32,     //Freezing point of Water
            boilalc=172,   //Boiling point of Alcohol
            boilmrc=676,   //Boiling point of Mercury
            boiloxy=-306,  //Boiling point of Oxygen
            boilwtr=212,   //Boiling point of Water
            temp;          //Temperature inputted by user

    //Ask for Input
    cout<<"This program can determine what substance freezes and boils at the"
            <<endl<<"temperature inputted by the user."<<endl;
    cout<<"Available Substances: Ethyl Alcohol, Mercury, Oxygen, Water"<<endl;
    cout<<" "<<endl;
    cout<<"Please input the temperature of your choice."<<endl;
    cin>>temp;
    
    //Map/Process Inputs to Outputs
    {
    if           (temp<=frzoxy)
        cout<<"Oxygen will freeze at that temperature."<<endl;
    else if      (temp<=frzalc)
        cout<<"Ethyl Alcohol will freeze at that temperature."<<endl;
    else if      (temp<=frzmrc)
        cout<<"Mercury will freeze at that temperature."<<endl;
    else if      (temp<=frzwtr)
        cout<<"Water will freeze at that temperature."<<endl;
    else
        cout<<"None of the substances will freeze at that temperature."<<endl;
    }
    
    {
    if           (temp>=boilmrc)
        cout<<"Mercury will boil at that temperature."<<endl;
    else if      (temp>=boilwtr)
        cout<<"Water will boil at that temperature."<<endl;
    else if      (temp>=boilalc)
        cout<<"Ethyl Alcohol will boil at that temperature."<<endl;
    else if      (temp>=boiloxy)
        cout<<"Oxygen will boil at that temperature."<<endl;
    else
        cout<<"None of the substances will boil at that temperature."<<endl;
    }
    


    //Display Outputs
    
    //Exit program!
    return 0;
}