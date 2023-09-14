#include<iostream>
using namespace std;

int main()
{
    int arr[5],key,i;
    cout<<"Enter 5 elements ";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    } 
    cout<<"Enter the number to be searched: ";
    cin>>key;
    for(i=0;i<5;i++)
    {
        if(arr[i]==key)
        { 
            cout<<key<< " found at index "<<i;
            break;
        } 
    } 
    if(i == 5) 
    {
        cout<<"number not found";
    }
    return 0;
}