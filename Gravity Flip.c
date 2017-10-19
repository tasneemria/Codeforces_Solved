#include<stdio.h>
#include<conio.h>

int main()
{
	int x,arr[100],i,j,temp;
	scanf("%d",&x);
	for(i=0;i<x;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<x;i++)
	{
		for(j=0;j<x-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(i=0;i<x;i++)
		printf("%d ",arr[i]);

	//getch();
	return 0;
}