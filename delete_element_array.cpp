//dynamic  - delete
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
    int  pos , size ;
    cout<<"Enter the size of array:";
    cin>>size;
    int *ptr = new int[size];
    cout<<"Enter elements in the array one by one:";
    for(int i = 0 ; i<size; i++)
    {
        cin>>ptr[i];
    }
    printArray(ptr , size);
    cout<<"\nEnter positon of element to be Deleted(index starts from 0)"<<endl;
    cin>>pos;
    
        for(int j = pos  ; j <=size - 1; j ++)
        {
            ptr[j] = ptr[j+1];
        }
        size = size - 1;

    cout<<"After Deletion:";
    printArray(ptr , size);
    delete ptr;
    return 0 ;
}