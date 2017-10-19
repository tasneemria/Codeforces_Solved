#include<stdio.h>
#include<conio.h>

int increase(int *arr,int n)
{
	int i;
	for(i=0;i<n-1;)
	{
		if(arr[i]<arr[i+1])
			i++;
		else
			return 0;
	}
	return 1;
}

int main()
{
	int temp,arr[100000],i,count=0,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(increase(arr,n)==1)
		{
			printf("%d",count);
			break;
		}
		else
		{
			temp = arr[n-1];
			for(j=n-1;j>0;j--)
			{
				arr[j] = arr[j-1];
				count++;
			}
			arr[0] = temp;	
		}

	}
	if(increase(arr,n)==0)
		printf("-1");

	//getch();
	return 0;
}