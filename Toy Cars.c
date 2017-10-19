#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[100][100],oned[100],i,j,n,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&arr[i][j]);
	}

	for(i=1;i<=n;i++)
		oned[i]=i;

	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i][j]==1)
			{
				oned[i]=0;
			}
			else if(arr[i][j]==2)
			{
				oned[j]=0;
			}
			else if(arr[i][j]==3)
			{
				oned[i]=0;
				oned[j]=0;
			}
		}
	}	

	for(i=1;i<=n;i++)
	{
		if(oned[i]!=0)
			count++;
	}

	printf("%d\n",count);

	for(i=1;i<=n;i++)
		if(oned[i]!=0)
			printf("%d ",oned[i]);

	//getch();
	return 0;
}