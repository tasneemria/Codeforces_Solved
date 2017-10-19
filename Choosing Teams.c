#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,k,arr[2000];
	int count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	k = 5-k;
	for(i=0;i<n;i++)
	{
		if(arr[i]<=k)
			count++;
	}

	printf("%d",count/3);

	//getch();
	return 0;
}