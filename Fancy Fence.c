#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	double j,a,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&m);
		for(j=3;;j++)
		{
			a = ((j-2)*180)/j;
			if(m==a)
			{
				printf("YES\n");
				break;
			}
			if(a>m)
			{
				printf("NO\n");
				break;
			}
		}
	}

	//getch();
	return 0;
}