/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz 
 * Created on October 3, 2021, 2:40 PM
 */

// Libraries
#include <iostream>

using namespace std;

//Return the array size and the array from the inputs

int *getData(int &);
int *sumAry(const int *, int );
void prntAry(const int *, int );

int main(int argc, char const *argv[]) {
    int n;
    // read data
    int *array = getData(n);
    // perform sum
    int *sum = sumAry(array, n);
    // print data
    prntAry(array, n);
    cout<<endl;
    prntAry(sum, n);
    return 0;
}

int *getData(int &n) {
    // read size
    cin >> n;
    // allocate memory
    int *array = new int[n];
    // read array
    for (int i = 0; i < n; i++)
        cin >> array[i];

    return array;
}

//Return the array with successive sums

int *sumAry(const int *array, int n) {
    int *sum = new int[n];
    sum[0] = array[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + array[i];
    return sum;
}

//Print the array

void prntAry(const int *array, int n) {
    for (int i = 0; i < n-1; i++) {
        cout << array[i] << " ";
    }
    cout<<array[n-1];
}
