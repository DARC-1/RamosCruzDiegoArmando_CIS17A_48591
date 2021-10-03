/* 
 * File:   main.cpp
 * Author: Diego Armando Ramos Cruz 
 * Created on October, 2021, 2:23 PM
 */

// Libraries
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

#include <vector>

using namespace std;


int *getData(int &); //Fill the array
int *sort(const int *,int); //Sort smallest to largest
int *reverse(const int *,int); //Sort in reverse order
void prntDat(const int *,int); //Print the array
int main() {
  

int* nos;
int size;
nos=getData(size);
nos=sort(nos,size);
prntDat(nos,size);
cout<<endl;
nos=reverse(nos,size);
prntDat(nos,size);
  
  
   return 0;
}

int *getData(int &size)
{
   cin>>size;
   // Creating array dynamically
int* nos = new int[size];
  
for(int i=0;i<size;i++)
{
   cin>>nos[i];
   }
   return nos;
}

//Sort smallest to largest
int *sort(const int *nos,int size)
{
       // Creating array dynamically
int* array = new int[size];
for(int i=0;i<size;i++)
{
   array[i]=nos[i];
   }
   //This Logic will Sort the Array of elements in Ascending order
   int temp;
   for (int i = 0; i < size; i++)
{
for (int j = i + 1; j < size; j++)
{
if (array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
}
return array;
}
//Sort in reverse order
int *reverse(const int *nos,int size)
{
   // Creating array dynamically
int* array = new int[size];
for(int i=0;i<size;i++)
{
   array[i]=nos[i];
   }
   //This Logic will Sort the Array of elements in Ascending order
   int temp;
   for (int i = 0; i < size; i++)
{
for (int j = i + 1; j < size; j++)
{
if (array[i] < array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
}
return array;
}

//Print the array
void prntDat(const int *nos,int size)
{
   for(int i=0;i<size-1;i++)
   {
       cout<<nos[i]<<" ";
   }
   cout<<nos[size-1];
}