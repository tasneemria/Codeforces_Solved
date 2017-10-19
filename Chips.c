#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m,remain,i;
	scanf("%d %d",&n,&m);
	remain=m-1;
	for(i=n;;)
	{
		if(remain>=i)
		{
			remain=remain-i;
			i--;
			if(i==0)
				i=n;
		}
		else if(remain<i)
			break;
	}

	printf("%d",remain);

	//getch();
	return 0;
}