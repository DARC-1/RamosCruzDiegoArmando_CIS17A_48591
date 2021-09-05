
/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz
 * Purpose: Convert currency between dollars and yen
 * Created on August 4, 2021 7:50 PM
 */

//System Libraries
#include <iostream>     //Input/Output Library
#include <cmath>        //Math Library
#include <iomanip>      //I/O Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables

//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    
    //Problem in homework asked for these variable names
    float YEN_PER_DOLLAR = 98.93;   //yen per dollar (unnecessarily long)
    float EUROS_PER_DOLLAR = 0.74;  //euros per dollar (also too long)

    float yen,    //Yen amount
        euros,  //Euros amount
        dollar; //Dollar amount
    char crrnc;
    //Initialize variables here
    cout<<"This Program displays amounts of money in Euros, Yen, and dollars"
            "depending on what currency you input"<<endl;
    redo:
    cout<<"What currency do you need converted?"<<endl;
    cout<<"1.Dollars\n"<<"2.Yen\n"<<"3.Euros"<<endl;
    cin>>crrnc;
    if (crrnc=='1'||crrnc=='2'||crrnc=='3'){    //Choice has to be 1-3
        cout<<"Enter amount"<<endl;
    } else {                                    //In case anything else is typed
        cout<<"Wrong input"<<endl;
          goto redo;                            //Goes back to prompt for choice
    }
    
    switch (crrnc){
        case '1': {     //Case Input amount is in dollars
            cin>>dollar;                            //input dollars
            euros = dollar*EUROS_PER_DOLLAR;        //Convert dollars->euros
            yen   = dollar*YEN_PER_DOLLAR;          //convert dollars->yen
        }break;
        case '2': {     //Case Input amount is in yen
            cin>>yen;                               //input yen
            dollar = yen/YEN_PER_DOLLAR;            //convert yen->dollars 
            euros  = dollar*EUROS_PER_DOLLAR;       //convert dollars->euros 
        }break;
        case '3': {     //Case Input amount is in euros
            cin>>euros;                             //input euros
            dollar = euros/EUROS_PER_DOLLAR;        //convert euros->dollars
            yen    = dollar*YEN_PER_DOLLAR;         //convert dollars->yen
            
        }break;
    }
    //Map inputs to outputs here, i.e. the process
    cout<<"Result:"<<endl;
    cout<<setw(10)<<left<<"Dollars:"<<fixed<<setprecision(2)<<showpoint
            <<"$"<<dollar<<endl;
    cout<<setw(10)<<left<<"Yen:"<<fixed<<setprecision(2)<<showpoint
            <<"$"<<yen<<endl;
    cout<<setw(10)<<left<<"Euros:"<<fixed<<setprecision(2)<<showpoint
            <<"$"<<euros<<endl;
    //Display the results

    return 0;
}