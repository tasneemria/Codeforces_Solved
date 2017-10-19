#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100];
	int i,x,s1;
	gets(str);
	sscanf(str,"%d",&s1);
	i=strlen(str);
	if(str[i-1]=='k')
	{
		if(s1==5 || s1==6)
			printf("53");
		else
			printf("52");
	}
	else
	{
		if(s1>=1 && s1<=29)
			printf("12");
		else if(s1==30)
			printf("11");
		else
			printf("7");
	}

	//getch();
	return 0;
}