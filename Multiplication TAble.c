#include<stdio.h>
#include<conio.h>

int main()
{
	int n,x,i,j,count=0;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(i*j==x)
				count++;
		}
	}

	printf("%d",count*2);

	//getch();
	return 0;
}