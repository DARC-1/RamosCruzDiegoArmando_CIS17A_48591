/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz 
 * Created on October 3, 2021, 2:55 PM
 */

// Libraries
#include <iostream>
#include <random>

using namespace std;

//Return the 2-D array and its size.

int **getData(int &, int &);
void prntDat(const int *const *, int , int );
void destroy(int **, int , int );
int sum(const int *const *, int , int );

int main(int argc, char const *argv[])

{

    int **array, n, m;

    array = getData(n, m);

    prntDat(array, n, m);

    cout << sum(array, n, m);

    destroy(array, n, m);

    return 0;

}

int **getData(int &n, int &m) {
    // read size
    cin >> n >> m;
    // allocate memory
    int **array = new int *[n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[m];
        for (int j = 0; j < m; j++)
            cin >> array[i][j];

    }
    return array;
}

//Print the 2-D Array

void prntDat(const int *const *array, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m-1; j++){
            cout << array[i][j] << " ";
        }
        cout<<array[i][m-1];
        cout << endl;
    }
}

//Deallocate memory

void destroy(int **array, int n, int m) {
    // delete each row
    for (int i = 0; i < n; i++)
        delete[] array[i];
    delete array;
}

//Return the Sum

int sum(const int *const *array, int n, int m) {
    int Sum = 0;
    // for each row
    for (int i = 0; i < n; i++)
        // for each columm
        for (int j = 0; j < m; j++)
            Sum += array[i][j];
    return Sum;

}