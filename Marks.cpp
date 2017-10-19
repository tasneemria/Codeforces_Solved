#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char arr[100][100];
	for(int I=0;I<n;I++)
	{
		cin>>arr[I];
	}
	int i,j,k,count=0;
	for(k=0;k<n;k++)
	{
		for(j=0;j<m;j++)
		{
			for(i=0;i<n;i++)
			{
				if(arr[i][j]>arr[k][j])
				{
					break;
				}
			}
			if(i==n)
			{
				count++;
				break;
			}
		}
	}
	cout<<count<<endl;

	//getch();
	return 0;
}