#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	int arr[51][2];
	int inp,curTime=1,watchTime=0;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}

	for(int i=0;i<n;i++)
	{
		while(curTime+x<=arr[i][0])
		{
			curTime+=x;
		}
		watchTime+=arr[i][1]-curTime+1;
		curTime = arr[i][1]+1;
	}

	cout<<watchTime;

	//getch();
	return 0;
}