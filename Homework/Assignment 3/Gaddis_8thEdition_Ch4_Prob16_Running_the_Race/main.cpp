/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on March 22, 2018, 2:00 PM
 * Purpose:  To ask for times of runners and display who came first,
 *           second, and third.
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
    string   runner1,
             runner2,
             runner3;
    
    float   time1,
            time2,
            time3;
            
            
    
    

    //Initial Variables
    
    //Ask for Times
    cout<<"This program can determine which runners came in what place"
            <<endl<<"by using times for each runner determined by"
            <<endl<<"user."<<endl;
    cout<<" "<<endl;
    cout<<"Please input the name of the first runner."<<endl;
    getline(cin, runner1);
    cout<<"Please input the time of the first runner."<<endl;
    cin>>time1;
    cin.ignore();
     cout<<"Please input the name of the second runner."<<endl;
     getline(cin, runner2);
    cout<<"Please input the time of the second runner."<<endl;
    cin>>time2;
    cin.ignore();
     cout<<"Please input the name of the third runner."<<endl;
     getline(cin, runner3);
    cout<<"Please input the time of the third runner."<<endl;
    cin>>time3;
    cin.ignore();
    
    //Calculations
    if (time1<0||time2<0||time3<0)
    {
        cout<<"Only positive times are accepted to make this work."<<endl;
        cout<<"Please try again."<<endl;
    }
    
   
    
    else if ((time1<time2)&&(time2<time3))
    
        cout<<runner1<<" came first, followed by "<<runner2<<" in second place,"
                <<endl<<"with "<<runner3<<" coming in third place."<<endl;
    
    else if ((time2<time3)&&(time3<time1))
    
        cout<<runner2<<" came first, followed by "<<runner3<<" in second place,"
                <<endl<<"with "<<runner1<<" coming in third place."<<endl;
    
    else if ((time3<time1)&&(time1<time2))
    
        cout<<runner3<<" came first, followed by "<<runner1<<" in second place,"
                <<endl<<"with "<<runner2<<" coming in third place."<<endl;
    
    else if ((time1<time3)&&(time3<time2))
    
        cout<<runner1<<" came first, followed by "<<runner3<<" in second place,"
                <<endl<<"with "<<runner2<<" coming in third place."<<endl;
    
    else if ((time2<time1)&&(time1<time3))
    
        cout<<runner2<<" came first, followed by "<<runner1<<" in second place,"
                <<endl<<"with "<<runner3<<" coming in third place."<<endl;
    
    else if ((time3<time2)&&(time2<time1))
    
        cout<<runner3<<" came first, followed by "<<runner2<<" in second place,"
                <<endl<<"with "<<runner1<<" coming in third place."<<endl;
     
    
   
            
        
        
                
    
    
            

    //Display Outputs
    
    //Exit program!
    return 0;
}