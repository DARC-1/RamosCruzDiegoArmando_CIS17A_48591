/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz
 * Created on August 5, 2021, 9:19 AM
 * Purpose:  Calculate rainy days
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>
#include <fstream>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    const int nmonths=3;//months observed
    const int days=30;//all days if the month but the 31st
    char weather[nmonths][days];
    //Initialize variables here
    int nrainyd;//number of rainy days
    int nsunnyd;//number of sunny days
    int ncloudy;//number of cloudy days
    int totalsn = 0;//total sunny days
    int totalrn = 0;//total rainy days
    int totalcl = 0;//total cloudy days
    int mostrnn = 0;
    //Map inputs to outputs here, i.e. the process
    ifstream fin;
    fin.open("RainOrShine.txt");
    if (!fin){
        cout<<"Error"<<endl;
        return 0;
    } else {
        for (int month=0; month<nmonths; month++){
            for (int day=0; day<days; day++){
                fin>>weather[month][day];
            }
        }
    }
    fin.close();
    //Display the results
    for (int month = 0; month<nmonths; month++){
        nrainyd = 0;
        nsunnyd = 0;
        ncloudy = 0;
        for(int day = 0; day<days; day++){
            switch(weather[month][day]){
                case 'S':nsunnyd++;break;
                case 'R':nrainyd++;break;
                case 'C':ncloudy++;break;
            }
        }
        month==0?cout<<"June\t\n":
            month==1?cout<<"July\t\n":
                cout<<"August\t"<<endl;
        cout<<"Rainy Days\t"<<nrainyd<<endl;
        cout<<"Cloudy Days\t"<<ncloudy<<endl;
        cout<<"Sunny Days\t"<<nsunnyd<<endl;
        
        totalsn += nsunnyd;
        totalrn += nrainyd;
        totalcl += ncloudy;
        
        if (mostrnn > nrainyd){
            mostrnn = month;
        }
    }
    
    cout<<"Overall:"<<endl;
    cout<<"Month with the most rain was ";
    mostrnn==0?cout<<"June":mostrnn==1?cout<<"July":cout<<"August"<<endl;
    return 0;
}