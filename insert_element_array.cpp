//static - limited size
#include<iostream>
using namespace std;
int main()
{
    int num= 30, pos , value , arr[30] , size ;
    cout<<"Enter the size of array(Max Size = 30):";
    cin>>size;
    cout<<"Enter elements in the array one by one:";
    for(int i = 0 ; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nPrinting array..."<<endl;
    for(int k = 0 ; k<size ; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<"Enter positon and value of element to be inserted"<<endl;
    cin>>pos>>value;
    if(pos > size)
    {
        cout<<"Out of Range";
    }
    else
    {
        for(int j = size +1 ; j >=pos ; j --)
        {
            arr[j+1] = arr[j];
        }
        arr[pos] = value;
        size = size + 1;
    }
    cout<<"After insertion:"<<endl;
    cout<<"\nPrinting array..."<<endl;
    for(int i = 0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0 ;
}