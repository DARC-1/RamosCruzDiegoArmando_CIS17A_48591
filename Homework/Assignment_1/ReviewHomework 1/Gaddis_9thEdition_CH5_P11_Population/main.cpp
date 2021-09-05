/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz
 * Created on August 4, 2021 10:45 AM
 * Purpose:  Population Size
 */

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //I/O Library     
#include <cmath>        //Math Library

using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int ndays = 0;   //Day indicator
    float npeople = 0; //Population Size per percentage 
    float prcntin = 0;  //Percent increase
    int populat = 0;    //Population size at a given day
            
    //Initialize variables here
    cout<<"This Program calculates population size after a "
            "given number of days"<<endl;
    
    cout<<"Enter number of days population will increase for."<<endl;
    do {
        cin>>ndays;
        if (ndays<1) cout<<"Number of days must be more than 0"<<endl;
    } while (ndays<1);
    
    cout<<"Enter the starting population size (more than 1)"<<endl;
    do {
        cin>>npeople;
        if (npeople<2) cout<<"You have to input a number greater than 2\n";
    } while (npeople<2);
    
    cout<<"Input the percent increase per day"<<endl;
    do {
        cin>>prcntin;
        if (prcntin<0) cout<<"Percent increase cannot be negative"<<endl;
    } while (prcntin<0);
    
    //Map inputs to outputs here, i.e. the process
    cout<<setw(10)<<left<<"Day"<<right<<"population"<<endl;
    for (int i=1; i<=ndays; i++){
        cout<<setw(10)<<left<<i<<right<<npeople<<endl;
        npeople += npeople*(prcntin/100);
        if (npeople>(static_cast<int>(npeople))) { //if amount has a decimal
            npeople += 1-(npeople-static_cast<int>(npeople));//rounds up
        }
        populat+=npeople;   //keeps total of population
    }
    cout<<setw(10)<<left<<"Total"<<right<<populat<<endl;
    //Display the results

    return 0;
}