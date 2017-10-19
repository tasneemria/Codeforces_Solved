#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[100000],i,j,n,count=0,pos=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;)
	{
		if(arr[i]==-1)
		{
			count++;
			i++;
		}

		else if(arr[i]>0)
		{
			a = i;
			for(j=a;j<n;j++)
			{
				pos+=arr[j];
				if(pos==0)
					break;
			}
			i = j+1;
		}

	}
	
	printf("%d",count);

	//getch();
	return 0;
}





