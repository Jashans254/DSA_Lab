#include<iostream>
using	namespace	std;
void	printArray(int	arr[],int	n)
{
	cout<<"\nPrinting Array...\n";
	for(int	k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
}
int	main()	{
	int	arr[]	=	{12,56,23,90,27,45,81};
	int	i,j,n=7;
    cout<<"Before Sorting";
	printArray(arr,n);
	
	for(int	i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int	temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
    cout<<"After Sorting";
	printArray(arr,n);
	return	0;
}