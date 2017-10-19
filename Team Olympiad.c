#include<stdio.h>
#include<conio.h>

int minimum(int a,int b,int c)
{
	if(a<=b && a<=c)
		return a;
	else if(b<=a && b<=c)
		return b;
	else if(c<=a && c<=b)
		return c;
}

int main()
{
	int i,j,k,n,sum,arr[5000],one=0,two=0,three=0,min;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);

	for(i=1;i<=n;i++)
	{
		if(arr[i]==1)
			one++;
		else if(arr[i]==2)
			two++;
		else
			three++;
	}

	//printf("%d %d %d \n",one,two,three);

	if(one==0 || two==0 || three==0)
		printf("0");
	else
	{
		
		printf("%d\n",minimum(one,two,three));

		sum=minimum(one,two,three);
		for(i=1;i<=sum;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(arr[j]==1)
				{
					printf("%d ",j);
					arr[j]=0;
					break;
				}
			}
			for(j=1;j<=n;j++)
			{
				if(arr[j]==2)
				{
					printf("%d ",j);
					arr[j]=0;
					break;
				}
			}
			for(j=1;j<=n;j++)
			{
				if(arr[j]==3)
				{
					printf("%d ",j);
					arr[j]=0;
					break;
				}
			}
			printf("\n");
		}

	}
	
	

	//getch();
	return 0;
}