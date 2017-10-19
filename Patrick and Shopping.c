#include<stdio.h>
#include<conio.h>

int minimum(int a,int b,int c)
{
	if(a<=b && a<=c)
		return a;
	else if(b<=a && b<=c)
		return b;
	else if(c<=a && c<=b)
		return c;
}

int main()
{
	int d1,d2,d3,a,b,c,d,min;
	scanf("%d%d%d",&d1,&d2,&d3);
	a=d1+d2+d3;
	b=2*(d1+d2);
	c=2*(d1+d3);
	d=2*(d2+d3);
	min=minimum(a,b,c);
	if(min<d)
		printf("%d",min);
	else
		printf("%d",d);

	//getch();
	return 0;
}