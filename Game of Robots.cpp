#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n,k,i,j,count,sum;
	int id[100000];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>id[i];
	int anSum;

	for(j=1;j<=n;j++)
	{
		sum = (j*(j+1))/2;
		if(sum>=k)
		{
			count = j;
			break;
		}
	}
	anSum = (count*(count-1))/2;
	anSum = k-anSum;
	cout<<id[anSum-1];

	//getch();
	return 0;
}