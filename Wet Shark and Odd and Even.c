#include<stdio.h>
#include<conio.h>

void sort(int *arr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
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
}

int main()
{
	int i,j=0,arr[100000],n,total,num;
	long long int sum = 0;
	scanf("%d",&n);
	total = n;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			sum+=num;
			total--;
		}
		else
		{
			arr[j] = num;
			j++;
		}
	}
	if(total%2==0)
	{
		for(i=0;i<j;i++)
			sum+=arr[i];
	}
	else
	{
		sort(arr,j);
		for(i=1;i<j;i++)
			sum+=arr[i];
	}

	printf("%I64d",sum);

	//getch();
	return 0;
}