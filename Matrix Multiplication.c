#include<stdio.h>
#include<conio.h>

int main()
{
	int count = 0;
	int i,j,x,n;
	scanf("%d%d",&n,&x);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i+1)*(j+1)==x)
				count++;
		}
	}
	printf("%d",count);

	//getch();
	return 0;
}