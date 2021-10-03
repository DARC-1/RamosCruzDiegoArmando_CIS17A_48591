/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz 
 * Created on October 3, 2021, 3:55 PM
 */

// Libraries
#include <iostream>

using namespace std;

int *getData(int &);
int *augment(const int *, int );
void prntAry(const int *, int );

int main() {

    int n;
    cin >> n;
    int *arr = getData(n);

    prntAry(arr, n);
    cout<<endl;
    arr = augment(arr, n);
    prntAry(arr, n+1);

}

int *getData(int &n) {
    int *arr = new int[n];
    for (int i=0; i<n; i++) {
    cin >> arr[i];
    
    }
    return arr;

}

int *augment(const int *arr, int n) {
    int *res = new int[n + 1];
    res[0] = 0;
    for (int i = 0; i<n; i++){
    res[i + 1] = arr[i];
    }
    return res;

}

void prntAry(const int *arr, int n) {
    for (int i = 0; i<n-1; i++) {
    cout << arr[i] << " ";
    }
    cout<<arr[n-1];

}
