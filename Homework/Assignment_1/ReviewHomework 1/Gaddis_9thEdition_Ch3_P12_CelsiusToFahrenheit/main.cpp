/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz
 * Description: Celsius to Fahrenheit 
 * Created on August 4, 2021, 6:10 PM
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>    //I/O Library
#include <cmath>      //Math Library 
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    char option;    //Whether they need to convert C->F or F->C
    float frnht = 0,    //Fahrenheit temperature
          celsius = 0;  //Celsius Temperature 
    
    //Initialize variables here
    cout<<"This Program Converts Celsius to Fahrenheit and Vise Versa"<<endl;
    cout<<"What do you need to convert to?\n"<<"1.Fahrenheit\n"<<"2.Celsius"<<endl;
    redo:
    cin>>option;
    
    if (option=='1'){
        cout<<"Input Temperature in Celsius"<<endl;
        cin>>celsius;
        frnht = ((9*celsius)/5)+32; //Converts celsius to fahrneheit
    } else if (option=='2'){
        cout<<"Input Temperature in Fahrenheit"<<endl;
        cin>>frnht;
        celsius = ((frnht-32)*5)/9; //converts fahrenheit to celsius 
    } else {
        cout<<"Wrong answer, input 1 or 2"<<endl;
        goto redo;
    }
    
    //Map inputs to outputs here, i.e. the process
    cout<<"Here are the results"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Celsius:    "<<celsius<<"*"<<endl;   //The * is the degree sign 
    cout<<"Fahrenheit: "<<frnht<<"*"<<endl;
    //Display the results

    return 0;
}