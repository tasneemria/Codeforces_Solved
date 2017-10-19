#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[100],n,i,j,sum1,sum2,len,count=1,temp;
	int i2,j2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

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

	

	j2 = n-1;
	sum2 = arr[j2];
	while(j2>=0)
	{
		sum1=0;
		for(i2=0;i2<=j2-1;i2++)
		{
			sum1 += arr[i2];
		}
		if(sum2<=sum1)
		{
			count += 1;
			sum2 += arr[j2-1];
			j2--;
		}
		else
			break;
	}

	printf("%d",count);

	//getch();
	return 0;
}