#include<iostream>
using namespace std;

int binsearch(int arr[], int n , int x)
{
  int low =0 ,high= n-1;

	while(low <= high) 
	{
			int mid = (low+high)/2;
			if( x > arr[mid]) 
			{
				low = mid + 1 ;
			} 
			else if( x < arr[mid ])
			{
				high = mid - 1 ;
			} 
			else 
			{
				return mid + 1;
			}
	}
	return 0;
}
int main()
{
	int size , result ;
	int arr[] = { 21 , 33 , 45 , 67 , 89 , 92};
	size = 6;
   cout<<"Elements in array are:\n";
    for( int i = 0 ; i < size ;  i++) 
    { 
        cout<<arr[i]<<" "; 
      }
	int x;
	cout<<"\nenter the number to be Searched: ";
	cin>> x;
	result=binsearch(arr, size , x);
    if(result)
    {
    	cout<<x <<" is present in the array at index "<<result-1;
	}
	else
	{
		cout<<x<<" is not present in the array";
	}
	return 0;
}