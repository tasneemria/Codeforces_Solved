#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int s,n,defeat=0;
	cin>>s>>n;
	int arr[1000][3];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}
	for(int i=0;i<n;i++)
	{
		arr[i][2] = 0;
	}
	
	int flag = 0;
	int i = 0;
	while(i<n)
	{
		if(s>arr[i][0] && arr[i][2]==0)
		{
			s = s+arr[i][1];
			arr[i][2] = 1;
			defeat++;
			i = 0;
		}
		else
		{
			i++;
		}
		if(defeat==n)
		{
			//cout<<"defeat"<<defeat<<endl;
			cout<<"YES"<<endl;
			break;
		}
		//cout<<"i "<<i<<endl;
		//cout<<"defeat"<<defeat<<endl;
	}
	if(defeat!=n)
		cout<<"NO"<<endl;

	//getch();
	return 0;
}

/*
999 2
1010 10
67 89
*/






