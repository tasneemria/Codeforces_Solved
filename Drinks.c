#include<stdio.h>
#include<conio.h>

int main()
{
	int i,arr[100],n;
	double sum=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum+arr[i];
	}

	a = (sum*100)/(n*100);
	printf("%lf",a);

	//getch();
	return 0;
}