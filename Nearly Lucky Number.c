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
	int n,sum=0;
	scanf("%d",&n);
	if(lucky(n)==1)
	{
		while(n>0)
		{
			n = n/10;
			sum++;
		}
		if(lucky(sum)==1)
			printf("YES");
	}

	else
	{
		while(n>0)
		{
			if(n%10 == 4 || n%10 == 7)
				{
					sum++;
					n = n/10;
				}
			else
				n = n/10;
		}
		if(lucky(sum)==1 && sum!=0)
			printf("YES");
		else
			printf("NO");
	}

	//getch();
	return 0;
}