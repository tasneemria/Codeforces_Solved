#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str1[100+1], str2[100+1];
	int i;
	gets(str1);
	gets(str2);
	for(i=0;str1[i];i++)
	{
		if(str1[i]>=65 && str1[i]<=90)
			str1[i]+=32;
	}
	for(i=0;str2[i];i++)
	{
		if(str2[i]>=65 && str2[i]<=90)
			str2[i]+=32;
	}

	printf("%d",strcmp(str1,str2));

	//getch();
	return 0;
}