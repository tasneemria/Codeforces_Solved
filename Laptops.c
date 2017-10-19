#include<stdio.h>
#include<conio.h>

int Alex(int arr[][2],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(arr[i][0]>=arr[i+1][0])
			return 0;
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i][1]<=arr[i+1][1])
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int arr[100000][2],i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&arr[i][j]);
	}

	if(Alex(arr,n) == 0)
		printf("Poor Alex");
	else if(Alex(arr,n) == 1)
		printf("Happy Alex");


	//getch();
	return 0;
}