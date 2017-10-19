#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,arr[100][3],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
		}
	}


	if(sum==0)
		printf("YES");
	else
		printf("NO");


	getch();
	return 0;
}