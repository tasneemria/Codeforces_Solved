#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[2500][2],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
		for(j=0;j<2;j++)
			scanf("%d",&arr[i][j]);

	for(i=0;i<n*n;i++)
	{
		if(arr[i][0]==arr[i][1])
			printf("%d ",i+1);
	}

	//getch();
	return 0;
}