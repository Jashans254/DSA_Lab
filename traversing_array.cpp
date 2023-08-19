#include<iostream>
using namespace std;
void printArray(int *arr , int size )
{
    cout<<"\nPrinting array..."<<endl;
    for(int i = 0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() 
{
    int size ;
    cout<<"Enter the size of array:";
    cin>>size;
    int *ptr = new int[size];//dynamic allocation of memory
    cout<<"Enter elements in the array one by one";
    for(int i = 0 ; i<size; i++)
    {
        cin>>ptr[i];
    }
    printArray(ptr , size);
    delete ptr;
    return 0 ;
}