#include<stdio.h>
#include<conio.h>

int main()
{
	int x,a;
	scanf("%d",&x);
	if(x%5==0)
		printf("%d",x/5);
	else
	{
		a = x/5;
		x = x-(a*5);
		printf("%d",a+1);
	}

	//getch();
	return 0;
}