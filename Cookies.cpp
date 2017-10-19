#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n,i,j,even,odd=0;
	int *arr;
	cin>>n;
	arr = new int[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
			odd++;
	}
	
	if(odd%2==0)
		cout<<n-odd<<endl;
	else
		cout<<odd<<endl;

	//getch();
	return 0;
}