#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n;
	int arr[101],g[4],c[4];
	char mark = 'e';
	cin>>n;
	g[0] = c[0] = 0;
	g[1] = 0;
	g[2] = 1;
	c[1] = 1;
	c[2] = 0;
	g[3] = c[3] = 1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int idle=0;

	for(int i=0;i<n-1;i++)
	{
		if(g[arr[i]]==0 && c[arr[i]]==0)
		{
			idle++;
			continue;
		}
		else if(g[arr[i]]==1 && c[arr[i]]==1)
		{
			if(g[arr[i+1]]==0 && c[arr[i+1]]==0)
				continue;
			if(g[arr[i+1]]==1 && c[arr[i+1]]==1)
			{
				if(g[arr[i+2]]==0)
					mark = 'g';
				else if(c[arr[i+2]]==0)
					mark = 'c';
			}

			if(mark == 'g')
			{
				if(g[arr[i+1]]==1 && c[arr[i+1]]==0)
					idle++;
			}
			else if(mark == 'c')
			{
				if(g[arr[i+1]]==0 && c[arr[i+1]]==1)
					idle++;
			}

		}
		else if(g[arr[i]]==0 && c[arr[i]]==1)
		{
			if(g[arr[i+1]]==0 && c[arr[i+1]]==1)
				idle++;
			else if(g[arr[i+1]]==1 && c[arr[i+1]]==1)
			{
				mark = 'g';
			}
		}
		else if(g[arr[i]]==1 && c[arr[i]]==0)
		{
			if(g[arr[i+1]]==1 && c[arr[i+1]]==0)
				idle++;
			else if(g[arr[i+1]]==1 && c[arr[i+1]]==1)
			{
				mark = 'c';
			}
		}

	}
		if(g[arr[n-1]]==0 && c[arr[n-1]]==0)
			idle++;
		cout<<idle;	

	//getch();
	return 0;
}