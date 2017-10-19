#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	int n,inp[100000],i,j,max,min,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&inp[i]);

	//for(i=0;i<n;i++)
	//{
	//	if(i==n-1)
	//	{
	//		min = abs(inp[i]-inp[i-1]);
	//		max = abs(inp[i]-inp[i-1]);
	//	}
	//	else
	//	{
	//		min = abs(inp[i]-inp[i+1]);
	//		max = abs(inp[i]-inp[i+1]);
	//	}
	//	for(j=0;j<n;j++)
	//	{
	//		a = abs(inp[i]-inp[j]);
	//		if(min>a && a!=0)
	//			min = a;
	//		if(max<a)
	//			max = a;
	//	}
	//	printf("%d %d\n",min,max);
	//}
	min = abs(inp[0]-inp[1]);
	max = abs(inp[0]-inp[n-1]);
	printf("%d %d\n",min,max);
	
	for(i=1;i<n-1 && n>2;i++)
	{
		a = abs(inp[i]-inp[i-1]);
		b = abs(inp[i]-inp[i+1]);
		if(a>b)
			min = b;
		else
			min = a;

		a = abs(inp[i]-inp[0]);
		b = abs(inp[i]-inp[n-1]);
		if(a>b)
			max = a;
		else
			max = b;

		printf("%d %d\n",min,max);

	}

	min = abs(inp[n-1]-inp[n-2]);
	max = abs(inp[n-1]-inp[0]);

	printf("%d %d\n",min,max);




	//getch();
	return 0;
}