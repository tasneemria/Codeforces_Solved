#include<stdio.h>
#include<conio.h>

int main()
{
	int k,n,w,i,lend,total=0;
	scanf("%d%d%d",&k,&n,&w);
	for(i=1;i<=w;i++)
		total = total+k*i;
	lend = total-n;
	if(lend<0)
		printf("0");
	else
		printf("%d",lend);

	getch();
	return 0;
}