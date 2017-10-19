#include<stdio.h>
#include<conio.h>

int main()
{
	int n,arr[100],max,sum=0,i,j;
	//char str[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	max=sum;
	for(i=0;i<n;)
	{
		if(arr[i]>0)
		{
			sum=0;
			while(arr[i]>0)
			{
				sum++;
				i++;
				if(i==n) break;
			}
		}
		else
		{
			sum=0;
			while(arr[i]<0)
			{
				sum++;
				i++;
				if(i==n) break;
			}
		}
		if(max<sum)
			max=sum;
	}

	printf("%d",max);

	getch();
	return 0;
}