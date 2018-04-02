/* 
 * File:   main.cpp
 * Author: Wesley Spencer
 * Created on April 1, 7:00 PM
 * Purpose:  Menu comprised of 10 problems.
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
    //Variables for 12
    float            F,     //Fahrenheit
                     C=1,     //Celsius
                     temp;
    
    //Variables for 13
    int     num=0,
            great,
            least,
            deter=0;
    
    //Variables for 1
    int     num2,
            start=1,
            sum=0;
    
    //Variables for 22
    int     size,
            hori,
            vert;
    
    //Variables for 23
    int     hori2,
            vert2;
    
    //Variables for 2
    char    num3;
    
    //Variables for 3
    float   rise;
    
    //Variables for 4
    int  burn, min;
    
    //Variables for 5
    float   incrper=0.04,    //Increase in percentage
            mbership=2500;   //Price in membership
    
    int     years=6,
            forloop;         //Variable for loop
    
    //Variables for 6
    float   dstance,
            speed,
            time;
    
    int     timefor;
    
    //Variables for Menu
    int     choice,
            quit=11;
    
    //Switch Process
    cout<<"This program contains 10 problems, which can be accessed be inputting"
            <<endl<<"the number that corresponds with the problem."<<endl;
    cout<<" "<<endl;
    
    do
        {
    cout<<"The available options are:"<<endl;
    cout<<"=========================="<<endl;
    cout<<"1:  Sums of Numbers"<<endl;
    cout<<"2:  Characters for the ASCII Codes"<<endl;
    cout<<"3:  Ocean Levels"<<endl;
    cout<<"4:  Calories Burned"<<endl;
    cout<<"5:  Membership Fees Increase"<<endl;
    cout<<"6:  Distance Traveled"<<endl;
    cout<<"7:  Celsius to Fahrenheit"<<endl;
    cout<<"8:  The Greatest and Least of These"<<endl;
    cout<<"9:  Square Display"<<endl;
    cout<<"10: Pattern Display"<<endl;
    cout<<" "<<endl;
    cout<<"Please pick one."<<endl;
    cin>>choice;
    while (choice<1||choice>10)
    {
        cout<<"Invalid selection."<<endl<<"Try again."<<endl;
        cin>>choice;
    }
            
    {
        switch (choice)
        {
            case 1:
                cout<<"This program can calculate the sum of numbers from 1 to the"
            <<endl<<"number that the user inputs."<<endl;
            cout<<" "<<endl;
            cout<<"Please input a positive number."<<endl;
            cin>>num2;
            cout<<" "<<endl;
    
            if (num2>=1)
                for (int n=start; n<=num2; n++)
                {
                    sum+=n;
                    cout<<sum<<endl;
                }
    
            else
                cout<<"Invalid input, please try again."<<endl;
                break;
                
            case 2:
                    for (num3=32; num3<127; num3++)
                {
                    cout<<num3;
                if (num3==47)
                    break;
                }
                cout<<endl;
                for (num3=48; num3<127; num3++)
                {
                    cout<<num3;
                if (num3==63)
                    break;
                }
                cout<<endl;
                for (num3=64; num3<127; num3++)
                {
                    cout<<num3;
                if (num3==79)
                    break;
                }
                cout<<endl;
                for (num3=80; num3<127; num3++)
                {
                    cout<<num3;
                if (num3==95)
                    break;
                }
                cout<<endl;
                for (num3=96; num3<127; num3++)
                {
                    cout<<num3;
                if (num3==111)
                    break;
                }
                cout<<endl;
                for (num3=112; num3<128; num3++)
                {
                    cout<<num3;
                if (num3==127)
                    break;
                }
                break;
                
            case 4:
                 cout<<"The list below displays how much calories are burned"<<endl
                    <<"every 5 minutes in a 30 minute period at a rate"<<endl
                    <<"of 3.6 calories per minute."<<endl;
                    cout<<"====================================================="<<endl;
    
                //Process/Calculations Here
                for (burn=18, min=5; burn<=110, min<=30; burn+=18, min+=5)
                {      

                    {
                        cout<<burn<<" calories in "<<min<<" minutes"<<endl;
                    }

                }
                    break;
            case 3:
                cout<<"The list below displays how much the ocean level rises"<<endl
                <<"in the next 25 years."<<endl;
                    cout<<"======================================================"<<endl;
    
                //Process/Calculations Here
                for (rise=1.5; rise<=38; rise+=1.5)
                {        
                    cout<<rise<<" millimeters"<<endl;
                }
                    break;
            case 5:
                //Cout before loop
                cout<<"Year         Membership Price"<<endl;
                cout<<"============================="<<endl;
            
            //Map/Process Inputs to Outputs
                for (forloop=1; forloop<=years; forloop++)
                {
                 mbership=mbership+(mbership*incrper);
                    cout<<forloop<<"            $"<<mbership<<endl;
                } 
                break;
            case 6:
                    //Map/Process Inputs to Outputs
                cout<<"This program can calculate how many miles traveled in an hour with"<<
                        endl<<"information provided by the user."<<endl;
                cout<<" "<<endl;
                cout<<"How fast was the vehicle in Miles per Hour?"<<endl;
                cin>>speed;
    
                while (speed<=0)
                {
                    cout<<"Invalid input, speed must be greater than 0."<<endl;
                    cout<<"Try again."<<endl;
                    cin>>speed;
                }
                cout<<"How many hours did the vehicle travel?"<<endl;
                cin>>time;
    
                while (time<1)
                {
                    cout<<"Invalid input, amount of hours must be greater than 0."<<endl;
                    cout<<"Try again."<<endl;
                    cin>>time;
                }
    
                cout<<"Hour         Distance Traveled"<<endl;
                cout<<"================================="<<endl;
    
                for (timefor=1; timefor<=time; timefor++)
                {
                    dstance=speed*timefor;
                    cout<<timefor<<"            "<<dstance<<endl;
                }
                break;
            case 7:    
                    cout<<"This program converts Celsius into Fahrenheit using loops."<<endl
                        <<"Results will be displayed on a table below."<<endl;
                cout<<"Celsius       Fahrenheit"<<endl;
                    cout<<"========================"<<endl;
                //Display Outputs
                for (C=1; C<=20; C+=1)
                {
                    temp=C*9/5;
                    F=temp+3;
                    cout<<C<<"             "<<F<<endl;
                }
                break;
            case 8:
                    //Map/Process Inputs to Outputs
                cout<<"This program can determine which of the numbers you input are the"
                        <<endl<<"greatest and the least."<<endl;
                cout<<" "<<endl;
    
                while (num !=-99)
                {
                    cout<<"Please input a number. Input -99 when you put in all the numbers you want."
                        <<endl;
                    cin>>num;
                    if (deter==0)
                    {
                        great=num;
                        least=num;
                    }
                    else
                    {
                        if (num>great&&num !=-99)
                            great=num;
                        else if(num<least&&num !=-99)
                            least=num;
                    }
                        deter++;
                }
                cout<<"Greatest number:    "<<great<<endl;
                cout<<"Least number:       "<<least<<endl;
                break;
            case 9:
                    cout<<"Please enter a number to determine the dimensions of a Square Pattern"
                        <<endl<<"comprised of the character X."<<endl;
                    cout<<" "<<endl;
                        cin>>size;
                    cout<<" "<<endl;
    
                    //Map/Process Inputs to Outputs
                    for (hori=1; hori<=size; hori++)
                    {
                        for (vert=1; vert<=size; vert++)
                        {
                            cout<<"X";
                        }
                        cout<<endl;
                    }
                    break;
            case 10:
                    for (hori2=1; hori2<=10; hori2++)
                    {
                        for (vert2=1; vert2<=hori2; vert2++)
                        {
                            cout<<"+";
                        }
                        cout<<endl;
                    }
                    for (hori2=10; hori2>=0; hori2--)
                    {
                        for (vert2=0; vert2<=hori2; vert2++)
                        {
                            cout<<"+";
                        }
                        cout<<endl;
                    }
                    break;
                
        }
    
    }
   


 }   
    while ((choice<1)||(choice>10));
    
    //Exit program!
    return 0;
}