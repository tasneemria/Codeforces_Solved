#include<stdio.h>
#include<conio.h>


int main()
{
	int n,a[100000],i,j,count=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
			count++;
	}
	printf("%d",count);

	//getch();
	return 0;
}