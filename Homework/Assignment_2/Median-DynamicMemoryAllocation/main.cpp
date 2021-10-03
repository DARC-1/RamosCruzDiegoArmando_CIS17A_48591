/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz 
 * Created on October 3, 2021, 1:23 PM
 */

// Libraries
#include<iostream>
#include<iomanip>
using namespace std;
// function declaration
int *getData(int &);
void prntDat(int *,int);
void prntMed(float *,int);
void sortData(int *numbers, int size);
float *median (int* numbers, int size);

int main() {
    int actualSize = 0;
    int *numbers = getData(actualSize);
    
    // sorting the dat before finding median
    sortData(numbers, actualSize);
    float * m = median(numbers, actualSize);
    prntDat(numbers, actualSize);
    prntMed(m, actualSize);
}

int* getData(int& size) {
    int n;
    cin>>n;
    int *num = new int[n];
    for(int i=0; i<n; ++i)
    cin>>num[i];
    size = n;
    return num;

}

void sortData(int *numbers, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 1; j < size-i; j++) {
            if (numbers[j-1] > numbers[j]) { // swap elements j and j+1
            float temp = numbers[j-1];
            numbers[j-1] = numbers[j];
            numbers[j] = temp;
            }
    
        }
    
    }

}

float *median(int* numbers, int size) {
    float *arr = new float[size+2];
    for(int i=2;i<size+2;++i)
        arr[i] = 1.0*numbers[i-2];
    arr[0] = size+2;
    if(size % 2 != 0) {
        float median = *(numbers + (size/2) );
        arr[1] = median;
    }
    else {
        int index1 = (size / 2) -1;
        int index2 = size / 2;
        float median = ( *(numbers + index1) + *(numbers +index2) )/ 2.0;
        arr[1] = median;
    }
    return arr;

}



void prntDat (int *arr, int n ) {
    for(int i=0; i<n-1; ++i)
    cout<<arr[i] <<" ";
    cout<<arr[n-1];
    cout<<endl;

}

void prntMed (float *arr, int n ) {
    cout << arr[0] <<" ";
    for(int i=1; i<n+1; ++i)
    cout << std::fixed<<std::setprecision(2) <<arr[i] <<" ";
    cout << std::fixed<<std::setprecision(2) <<arr[n+1];
}