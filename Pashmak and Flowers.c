#include<stdio.h>
#include<conio.h>

int main()
{
	int n,arr[2*100000],i,j,way_c=0,m,temp,len;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
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

	len = n-1;
	m = arr[len] - arr[0];
	while(len>0)
	{
		for(i=0;i<n;i++)
		{
			if(m==arr[len]-arr[i])
				way_c++;
			else
				break;
		}
		len--;
	}
	printf("%d %d",m,way_c);

	//getch();
	return 0;
}