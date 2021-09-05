/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz
 * Created on August 4, 2021 10:59 PM
 * Purpose: Determines number of days in a month 
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int month,      //Month Number (1-12)
        days,       //Days
        year;       //Year
    //Initialize variables here
    cout<<"This program shows the number of days a particular month in a "
            "particular year had."<<endl;
    cout<<"Enter Month (1-12)"<<endl;
    redomon:
    cin>>month;
    if (month>12){
        cout<<"wrong input\n"<<"Input a number from 1-12\n"<<endl;
        goto redomon;       //prompt for month input again
    }
    cout<<"Enter Year"<<endl;
    cin>>year;
    //Map inputs to outputs here, i.e. the process
    switch (month){
        case 1: days = 31;break;    //January       
        case 2:{                    //February
            if (year%100==0){                       //If divisible by 100
                (year%400)==0?days=29:days=28;      //If divisible by 400
            } else if (year%100!=0){                //If not divisible by 100
                (year%4)==0?days=29:days=28;        //If divisible by 4
            }
        } break;
        case 3:days = 31;break;     //March
        case 4:days = 30;break;     //April
        case 5:days = 31;break;     //May
        case 6:days = 30;break;     //June
        case 7:days = 31;break;     //July
        case 8:days = 31;break;     //August
        case 9:days = 30;break;     //September
        case 10:days = 31;break;    //October
        case 11:days = 30;break;    //November 
        case 12:days = 31;break;    //December
    }
    //Display the results
    cout<<"In the year "<<year<<", month "<<month<<", the number of days is "<<
            days<<endl;
    return 0;
}