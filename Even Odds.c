#include<stdio.h>
#include<conio.h>

int evod(int n,int k)
{
	int i,j,count;
	i=1;
	j=0;
	count=1;

	if(k==1)
		return 1;

	while(i<=k)
	{
		i+=2;
		count++;
	}
	if(count == k)
	{
		return i;
	}
	else
	{
		while(j<=k)
		{
			j=j+2;
			count++;
			if(count==k)
				break;
		}
		return j;
	}





}
int main()

{
	int n,k;
	scanf("%d%d",&n,&k);

	printf("%d",evod(n,k));

	getch();
	return 0;
}