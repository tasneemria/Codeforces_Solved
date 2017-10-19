#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,dif,same;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		dif = a;
		same = (b-a)/2;
	}
	else if(a>b)
	{
		dif = b;
		same = (a-b)/2;
	}
	else if(a==b)
	{
		dif = a;
		same = 0;
	}
	printf("%d %d",dif,same);


	//getch();
	return 0;
}