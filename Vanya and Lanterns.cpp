#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,l;
	int *arr;
	cin>>n>>l;
	arr = new int[n];
	int i,j,k;
	double max=0,difference;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(i=n-1;i>0;i--)
	{
		if(arr[0]!=0)
		{
			if(max<arr[0])
				max = 2*arr[0];
		}
		if(arr[n-1]!=l)
		{
			if(l-arr[n-1]>max)
				max = 2*(l-arr[n-1]); 
		}
		if(arr[i]-arr[i-1]>max)
			max = arr[i]-arr[i-1];

	}
	printf("%0.10lf",max/2.00);


	//getch();
	return 0;
}