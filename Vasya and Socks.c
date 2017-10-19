#include<stdio.h>
#include <conio.h>

int main()
{
	int n,m,sum,div;
	scanf("%d%d",&n,&m);
	sum=n;
	while(n/m!=0)
	{
		div=n/m;
		sum=sum+div;
		n=n/m+n%m;

	}

	printf("%d",sum);

	//getch();
	return 0;
}