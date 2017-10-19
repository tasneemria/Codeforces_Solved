#include<stdio.h>
#include<conio.h>

int lucky(int n)
{
	int a;
	a = n;
	while(a>0)
	{
		if(a%10==4 || a%10==7)
		{
			a = a/10;
			continue;
		}
		else
			break;
	}
	if(a==0)
		return 1;
	else return 0;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	if(lucky(n)==1)
		printf("YES");
	else
	{
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			{
				if(lucky(i)==1)
				{
					printf("YES");
					break;
				}
			}
		}
		if(i==(n/2)+1)
			printf("NO");
	}

	//getch();
	return 0;
}