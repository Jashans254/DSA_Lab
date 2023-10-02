#include<iostream>
using namespace std; 
void printArray(int arr[] , int size)
{
	for(int i = 0 ; i<size ; i++) 
	{
	     cout<<arr[i]<<" ";
	} 
}
int main() 
{
	int arr[10] ;
	int size ;
	cout<<"Enter the size of array(MaxSize-10):";
	cin>>size;
	cout<<"enter elements:\n";
	for(int i = 0 ; i<size ; i++) 
	{
		cin>>arr[i];
	} 
	cout<<"Before sorting:\n";
	printArray(arr , size);
	
	for(int i = 0 ; i<size-1; i++)
	{
		int min = i ;
		for( int j = i +1 ; j<size ; j++)
		   {
		   	if(arr[min] > arr[j])
		   	{
		   		min = j;
			}
		   } 
		   if( min!= i )
		   {
		      int temp = arr[i];
		      arr[i] = arr[min];
		      arr[min] = temp;
		   }
	} 
	
	cout<<"\nAfter sorting:\n";
	printArray(arr , size);
	
	return 0;
}