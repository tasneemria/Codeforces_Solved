#include<stdio.h>
#include<conio.h>

int main()
{
	int arr1[100],temp,n,k,i,j,count,max,arr[100];
	scanf("%d%d",&n,&k);

	count = 0;
	max = 0;

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		arr1[i] = arr[i];
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(i=0; ;i++)
	{
		count+=arr[i];
		if(count<k)
		{
			max++;
			continue;
		}
		else if(count==k)
		{
			max++;
			break;
		}
		else if(count>k)
		{
			count-=arr[i];
			break;
		}

	}
	
	if(max>n)
		max = n;

	printf("%d\n",max);

	for(i=0;i<max;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr1[j]==arr[i])
			{
				arr1[j] = 0;
				printf("%d ",j+1);
				break;
			}
		}
	}

	//getch();
	return 0;
}