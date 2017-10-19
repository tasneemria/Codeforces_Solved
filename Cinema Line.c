#include<stdio.h>
#include<conio.h>

int main()
{
	int n,arr[100000],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[0]==50 || arr[0]==100)
		{
			printf("NO");
			break;
		}
		if(arr[i]==25)
		{
			count+=25;
		}
		else
		{
			if(arr[i]==50)
			{
				if(count>=25)
				{
					count = count-25+50;
					//continue;
				}
				else
				{
					printf("NO");
					break;
				}
			}
			else if(arr[i]==100)
			{
				if(count>=75)
				{
					count = count-75+100;
					//continue;
				}
				else
				{
					printf("NO");
					break;
				}
			}
		}
	}

	if(i==n)
		printf("YES");

	//getch();
	return 0;
}