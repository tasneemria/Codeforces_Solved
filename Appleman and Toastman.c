#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,temp,score=0,arr[300000],remain,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	remain = n;
	for(i=n;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<remain;j++)
		{
			score = score+arr[j];
		}
		if((remain-1)!=0)
			score=score+arr[remain-1];
		remain=remain-1;
	}

	printf("%d",score);

	//getch();
	return 0;
}