#include<stdio.h>
#include<conio.h>

int main()
{
	int n,d,arr[1000],total=0,joke=0,i;
	scanf("%d%d",&n,&d);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<n-1;i++)
	{
		arr[i] = arr[i]+10;
		joke+=2;
	}

	for(i=0;i<n-1;i++)
	{
		total = total+arr[i];
	}

	if(total>d)
		printf("-1");
	else
	{
		total = total + arr[n-1];
		joke=(d-total)/5+joke;
		if(total>d)
			printf("-1");
		else
			printf("%d",joke);
	}

	//getch();
	return 0;
}