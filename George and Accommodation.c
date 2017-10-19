#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,count=0;
	int arr[100][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%d",&arr[i][j]);
	for(i=0;i<n;i++)
	{
		if(arr[i][0]+2 <= arr[i][1])
			count+=1;
	}

	printf("%d",count);

	//getch();
	return 0;
}