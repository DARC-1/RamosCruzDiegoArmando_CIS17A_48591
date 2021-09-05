/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz
 * Created on August 5, 2021, 12:01 AM
 * Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
const int NUM_NAMES = 20;
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void srtstrg(string[],int);         //sort string
void swap(string &, string &);
int bsearch(string [],int,string);   //Binary Search
//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int result;     //result of binary search
    string lname, //last name
            fname;// first name
    string name;    //desired name
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                               "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                               "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    
    //Map inputs to outputs here, i.e. the process
    cout<<"Enter Name you need to search"<<endl;
    cin>>lname>>fname;//takes in first name plus the "," and the first name
    name = lname+' '+fname;//unites the strings inputted  
    srtstrg(names,NUM_NAMES);//sorts string names
    
    result = bsearch(names,NUM_NAMES,name);//finds index location of name
    
    if (result==-1) cout<<name<<" does not exist in the array"<<endl;
    else cout<<"Name "<<name<<" fount at index "<<result<<" in array"<<endl;
    //Display the results

    return 0;
}

//String sort
void srtstrg(string names[],int size){
    //Variables req by algorithm
    int strtscn;    //start scan
    int mnIndex;    //Minimum index
    string minVal;  //Minimum value
    
    for (strtscn = 0; strtscn <size; strtscn++){
        mnIndex=strtscn;
        minVal = names[strtscn];
        for (int index = strtscn+1; index<(size); index++){
            if(names[index]<minVal){
                minVal=names[index];
                mnIndex=index;
            }
        }
        swap(names[mnIndex],names[strtscn]);
    }
}

//Swaps 
void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

//Binary Search
int bsearch (string names[], int size, string name) {
    int first = 0,
            last = size-1,
            middle,
            position = -1;
    bool found = false;
    while (!found && first <= last) {
        middle = (first+last)/2;
        if (names[middle] == name) {
            found = true;
            position = middle;
        } else if (names[middle] > name) last = middle -1;
        else first = middle +1;
    }
    return position;
}