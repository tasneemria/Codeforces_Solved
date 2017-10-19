#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
	char ch[100+1];
	char ch1[100+1];
	int i;
	gets(ch);
	gets(ch1);
	for(i=0;i<strlen(ch);i++)
	{
		if((ch[i]=='1' && ch1[i]=='0') || (ch[i]=='0' && ch1[i]=='1'))
			printf("1");
		else
			printf("0");
	}

	//getch();
	return 0;
}