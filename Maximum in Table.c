#include<stdio.h>
#include<conio.h>

int table(int a,int b)
{
	if(a==0 || b==0)
		return 1;
	else
		return table(a,b-1)+table(a-1,b);
}


int main()
{
	int m;
	scanf("%d",&m);
	printf("%d",table(m-1,m-1));

	//getch();
	return 0;
}