/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz
 * Description: Celsius to Fahrenheit list 
 * Created on August 5, 2021, 11:23 AM
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
float convert(float);        //converts C->F
//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int option;    //Whether they need to convert C->F or F->C
    float frnht = 0,    //Fahrenheit temperature
          celsius = 0;  //Celsius Temperature 
    
    //Initialize variables here
    cout<<"This Program Converts Celsius to Fahrenheit and Vise Versa"<<endl;
    cout<<"What do you need to convert to?\n"<<"1.Fahrenheit\n"<<"2.Celsius"<<endl;
    redo:
    cin>>option;
    
    if (option==1){
        cout<<"Input Temperature in Celsius"<<endl;
        cin>>celsius;
        frnht = ((9*celsius)/5)+32;
    } else if (option==2){
        cout<<"Input Temperature in Fahrenheit"<<endl;
        cin>>frnht;
        celsius = ((frnht-32)*5)/9;
    } else if (option>2) {
        cout<<"Wrong answer, input 1 or 2"<<endl;
        goto redo;
    }
    
    //Map inputs to outputs here, i.e. the process
    cout<<"Here are the results"<<endl;
    cout<<"Celsius:    "<<celsius<<"*"<<endl;   //The * is the degree sign 
    cout<<"Fahrenheit: "<<frnht<<"*"<<endl;
    
    cout<<setw(10)<<left<<"Celsius"<<right<<"Fahrenheit"<<endl;
    for (int i=0; i<21; i++){
        celsius=convert(i);
        cout<<setw(10)<<left<<fixed<<setprecision(2)<<showpoint<<i<<right<<
                celsius<<endl;
    }
    //Display the results

    return 0;
}

float convert(float frnht){
    float celsius = ((frnht-32)*5)/9;
    return celsius;
}