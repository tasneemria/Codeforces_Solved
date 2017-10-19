#include<bits/stdc++.h>
//#include<conio.h>

using namespace std;

int main()
{
	int i,click=0,len;
	cin>>len;
	int *arr;
	arr = new int[len];
	for(i=0;i<len;i++)
		cin>>arr[i];

	for(i=0;i<len-2;)
	{
		if(arr[i]==1 && arr[i+1]==0 && arr[i+2]==1)
		{
			click = click+3;
			i = i+3;
		}
		else if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)
		{
			click = click+2;
			i = i+2;
		}
		else if(arr[i]==1)
		{
			click++;
			i++;
		}
		else
		{
			i++;
		}
		if(arr[i-1]==1 && arr[i+1]==0 && arr[i+2]==0)
		{
			while(arr[i]!=1)
			{
				i++;
			}
			if(arr[i]==1) click++;
		}
	}

	cout<<click+arr[len-1]+arr[len-2];

	//getch();
	return 0;
}
