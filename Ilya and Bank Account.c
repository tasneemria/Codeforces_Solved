#include<stdio.h>
#include<conio.h>

int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	if(x>=0)
		printf("%d",x);
	else
	{
		c = (-x)%10;
		a = x/10;
		b = (a/10)*10-c;
		if(a>b)
			printf("%d",a);
		else
			printf("%d",b);
	}

	//getch();
	return 0;
}