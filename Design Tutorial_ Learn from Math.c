#include<stdio.h>
#include<conio.h>

int prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=4,j=n-4;i<=(n-4);i++,j--)
	{
		if(prime(i)==0 && prime(j)==0)
			{
				printf("%d %d",i,j);
				break;
		    }
	}


	//getch();
	return 0;
}