#include<iostream>
using namespace std;
void printArray(int arr[], int size) 
{
  cout<<"\nelements in the array are ... \n" ;
    for(int i =0 ; i< size ;i++) 
    {
        cout<<arr[i] <<" " ;
    } 
} 
int main()
{
      int a[] = {7 , 92 , 65 , 34 , 22};
      int size = 5;
      cout<<"Unsorted Array .." ;
      printArray(a, size) ;
      
    for( int j = 1; j<size;j++) 
    {
        int key = a[j] ;
        int i = j-1;
        while(i>-1 && a[i] > key) 
        {   
           a[i+1] = a[i] ;
           i--;
        } 
        a[i+1] = key;
    } 
    cout<<"\nSorted Array.. " ;
    printArray(a, size) ;
    return 0;
}