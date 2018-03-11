/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 10, 2018, 5:30 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>


using namespace std;

//User Libraries

//Global Constants  

//Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    string   name,    //Your name
             age,     //Your age
             city,    //Your city name
             college, //Your college name
             job,     //Your profession
             animal,  //Type of animal
             petname; //Name of pet

  
    
            
    
    //Initialize Variables

            

            
    
    //Process/Map inputs to outputs
    cout<<"This program creates a story out of whatever you input"<<endl
    <<"what is asked of you."<<endl;
    cout<<" "<<endl;
    cout<<"What is your name?"<<endl;
    getline(cin, name);
    cout<<"How old are you?"<<endl;    
    getline(cin, age);
    cout<<"What is the name of your city?"<<endl;
    getline(cin, city);
    cout<<"What is the name of your college?"<<endl;
    getline(cin, college);
    cout<<"What is your profession?"<<endl;
    getline(cin, job);
    cout<<"What type of pet do you have?"<<endl;
    getline(cin, animal);
    cout<<"What is your pet's name?"<<endl;
    getline(cin, petname);
            
 
    //Output data
    cout<<"There once was a person named "<<name<<" who live in "<<city<<"."<<endl
            <<"At the age of "<<age<<", "<<name<<" went to college at "<<endl
            <<college<<". "<<name<<" graduated and went to work as a "<<endl
            <<job<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<endl
            <<petname<<". They both lived happily ever after!"<<endl;


            
            
    
    //Exit stage right!
    return 0;
}