#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a,j,sum,n,X,Y,arr_x[100],arr_y[100],arr[200];
	scanf("%d",&n);
	scanf("%d",&X);
	for(i=0;i<X;i++)
		scanf("%d",&arr_x[i]);

	scanf("%d",&Y);
	for(i=0;i<Y;i++)
		scanf("%d",&arr_y[i]);

	for(i=0;i<X;i++)
	{
		arr[i] = arr_x[i];
	}
	for(i=X,j=0;i<X+Y;i++,j++)
	{
		arr[i] = arr_y[j];
	}


	sum = 0;
	for(i=n;i>0;i--)
	{
		for(j=0;j<X+Y;j++)
		{
			if(arr[j]==i)
			{
				sum++;
				break;
			}
		}
	}

	if(sum<n)
		printf("Oh, my keyboard!");
	else
		printf("I become the guy.");

	getch();
	return 0;
}