#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,v;
	cin>>n>>v;
	int i,nOitem,price,count=0;
	int *sellarr;
	int flag = 0;
	sellarr = new int[n];
	for(int k=0;k<n;k++)
		sellarr[k] = 0;
	for(i=0;i<n;i++)
	{
		cin>>nOitem;
		for(int j=0;j<nOitem;j++)
		{
			cin>>price;
			if(v>price && flag==0)
			{
				count++;
				sellarr[i] = 1;
				flag = 1;
			}
		}
		flag = 0;
	}
	cout<<count<<endl;
	for(int j=0;j<n;j++)
	{
		if(sellarr[j]==1)
			cout<<j+1<<" ";
	}

	//getch();
	return 0;
}