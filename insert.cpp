//dynamic 
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
    int  pos , value , size ;
    cout<<"Enter the size of array:";
    cin>>size;
    int *ptr = new int[size];
    cout<<"Enter elements in the array one by one:";
    for(int i = 0 ; i<size; i++)
    {
        cin>>ptr[i];
    }
    printArray(ptr , size);
    cout<<"\nEnter positon and value of element to be inserted(index starts from 0)"<<endl;
    cin>>pos>>value;
    
        for(int j = size +1 ; j >=pos ; j --)
        {
            ptr[j+1] = ptr[j];
        }
        ptr[pos] = value;
        size = size + 1;

    cout<<"After insertion:"<<endl;
    printArray(ptr , size);
    delete ptr;
    return 0 ;
}