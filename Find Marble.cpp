#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n,s,t,count=0;
	cin>>n>>s>>t;
	int arr[100001],newarr[100001],gar[100001];
	int c;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		gar[i] = c;
	}
	for(int i=1;i<=n;i++)
		arr[i] = i;
	for(int j=0;j<=n;j++)
	{
		if(s==t)
		{
			cout<<0;
			break;
		}
		for(int i=1;i<=n;i++)
		{
			newarr[gar[i]] = arr[i];
		}
		for(int i=1;i<=n;i++)
		{
			arr[i] = newarr[i];
		}
		count++;
		if(arr[t]==s)
		{
			cout<<count<<endl;
			break;
		}
		if(count>n)
		{
			cout<<-1;
			break;
		}
	}


	//getch();
	return 0;
}