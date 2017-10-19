#include<stdio.h>
#include<conio.h>

int gcd(int a, int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}

int heap_function(int a,int b,int c)
{
	static int sum = 0;
	if(c==0)
		return sum;
	else
	{
		sum++;
		return heap_function(b,a,c-gcd(a,c));
	}
}

int main()
{
	int a,b,heap;
	scanf("%d%d%d",&a,&b,&heap);
	//if(heap_function(a,b,heap)==b)
	//	printf("0");
	//else if((heap_function(a,b,heap)==a))
	//	printf("1");

	if(heap_function(a,b,heap)%2==1)
		printf("0");
	else
		printf("1");

	//getch();
	return 0;
}