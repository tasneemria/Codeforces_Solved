#include<stdio.h>
#include<conio.h>

int f(int *arr,int n)
{
	int i;
	for(i=0;i<n;)
	{
		if(arr[i]==i)
			i++;
		else
			return 0;
	}
	return 1;
}

int main()
{
	int n,i,j,save,arr[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j%2==0)
			{
				save = arr[j]+1;
				if(save==n)
					arr[j]=0;
				else
					arr[j]=save;
			}
			else if(j%2==1)
			{
				save = arr[j]-1;
				if(save==-1)
					arr[j]=n-1;
				else
					arr[j]=save;
			}
		}

		if(f(arr,n)==1)
		{
			printf("Yes");
			break;
		}

	}

	if(i==n)
		printf("No");



	//getch();
	return 0;
}