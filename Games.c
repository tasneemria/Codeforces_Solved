#include<stdio.h>
#include<conio.h>

int main()
{
	int n,arr[30][2],i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%d",&arr[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][0]==arr[j][1])
				sum++;
		}
	}

	printf("%d",sum);


	//getch();
	return 0;
}