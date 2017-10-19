#include<stdio.h>
#include<conio.h>

int main()
{
	int n,a[1000],i,j,sum,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<n;j++)
	{
		sum = 0;
		if(a[j]<a[j-1])
		{
			for(i=j-1;i>=0;i--)
			{
				if(a[j]<a[i])
					sum++;
				else
					break;
			}
			if(sum==j)
				count++;
		}
		else if(a[j]>a[j-1])
		{
			for(i=j-1;i>=0;i--)
			{
				if(a[j]>a[i])
					sum++;
				else
					break;
			}
			if(sum==j)
				count++;
		}
	}
	printf("%d",count);

	//getch();
	return 0;
}