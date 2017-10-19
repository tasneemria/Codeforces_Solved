#include<stdio.h>
#include<conio.h>

int main()
{
	int n,t,i;
	int a=0;
	scanf("%d%d",&n,&t);
	for(i=1;i<=n && t!=10;i++)
		printf("%d",t);
	if(t==10 && n>1)
	{
		printf("1");
		for(i=1;i<n;i++)
		{
			printf("%d",a);
		}

	}
	if(t==10 && n==1)
		printf("-1");


	//getch();
	return 0;
}