#include<stdio.h>
#include<conio.h>

int main()
{
	int n,sum=0,a;
	int result = 0;
	scanf("%d",&n);
	while(n>10)
	{
		a = n%10;
		if(9-a < a)
		{
			sum = sum*10 + (9-a);
		}
		else
			sum = sum*10 + a;
		n = n/10;
	}
	a = n;
	if(9-a<a && (9-a)!=0)
		sum = sum*10 + (9-a);
	else
		sum = sum*10 + a;
	
	while(sum>0)
	{
		result = result*10 + sum%10;
		sum = sum/10;
	}
	printf("%d",result);

	getch();
	return 0;
}