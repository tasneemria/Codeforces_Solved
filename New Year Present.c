#include<stdio.h>
#include<conio.h>

int blank(int *arr, int n)
{
	int i;
	for(i=0;i<n;)
	{
		if(arr[i]==0)
			i++;
		else
			return 0;
	}
	return 1;
}


int main()
{
	int i,j,arr[300],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(j=1;;)
	{
		if(j%2==1)
		{
			printf("R");
			for(i=1;i<n;i++)
			{
				if(arr[i]==0 && i<n-1)
					printf("R");
				else if(arr[i]>0)
				{
					printf("P");
					arr[i]=arr[i]-1;
					if(i<n-1)
						printf("R");
				}
			}
		}
		else if(j%2==0)
		{
			printf("L");
			for(i=n-2;i>=0;i--)
			{
				if(arr[i]==0 && i!=0)
				{
					printf("L");
				}
				else if(arr[i]>0)
				{
					printf("P");
					arr[i] = arr[i]-1;
					if(i!=0)
						printf("L");
				}
			}
		}
		j++;
		if(blank(arr,n)==1)
			break;
	}

	//getch();
	return 0;
}