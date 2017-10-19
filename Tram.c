#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,n,i,max,c[1000];
	scanf("%d",&n);
	c[0] = 0;
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		c[i] = c[i-1]-a+b;
	}

	max = c[0];
	for(i=1;i<=n;i++)
	{
		if(c[i]>max)
			max = c[i];
	}
	printf("%d",max);

	//getch();
	return 0;
}