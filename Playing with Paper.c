#include<stdio.h>
#include<conio.h>

int main()
{
	long long int temp,a,b,sum;
	scanf("%I64d%I64d",&a,&b);
	sum = 0;
	
	while(1)
	{
		sum = sum+a/b;
		temp = a;
		a = b;
		b = temp%b;
		if(b==0)
			break;
	}

	printf("%I64d",sum);
	

	//getch();
	return 0;
}