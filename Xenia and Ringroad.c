#include<stdio.h>
#include<conio.h>

int main()
{
	unsigned int n,m,i,j,a[100000],sum;
	scanf("%u%u",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%u",&a[i]);
	}
	sum = a[0]-1;

	for(i=1;i<m;i++)
	{
		if(a[i-1]>a[i])
		{
			sum=sum+n-a[i-1]+a[i];
		}
		else if(a[i-1]<a[i])
		{
			sum=sum+a[i]-a[i-1];
		}
	}

	printf("%u",sum);

	//getch();
	return 0;
}