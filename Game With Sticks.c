#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m,total,sum=0;
	scanf("%d%d",&n,&m);
	total = n*m;

	while(total!=0)
	{
		total = total-(n-1)-(m-1)-1;
		n--;
		m--;
		sum++;
	}

	if(sum%2==1)
		printf("Akshat");
	else
		printf("Malvika");

	//getch();
	return 0;
}