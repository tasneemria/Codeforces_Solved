#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str1[100+1],str2[100+1],temp;
	int i,j;
	gets(str1);
	gets(str2);
	for(i=0,j=strlen(str1)-1;i<(strlen(str1)/2);i++,j--)
	{
		temp = str1[i];
		str1[i] = str1[j];
		str1[j] = temp;
	}

	if(strcmp(str1,str2)==0)
		printf("YES");
	else
		printf("NO");

	//getch();
	return 0;
}