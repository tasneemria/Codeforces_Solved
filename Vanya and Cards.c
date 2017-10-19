#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n,x,sum=0,card,arr[1000];
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		sum = sum+arr[i];
	}
	if(sum<0)
		sum = -sum;
	if(sum==0)
		card = 0;
	else if(sum<x)
		card = 1;
	else
	{
		if(sum%x==0)
			card = sum/x;
		else
			card = sum/x+1;
	}

	printf("%d",card);


	//getch();
	return 0;
}