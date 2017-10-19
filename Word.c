#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[101];
	int i,lower=0,upper;
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		if(str[i]>='a' && str[i]<='z')
			lower++;
	}

	upper = strlen(str) - lower;
	if(upper>lower)
		printf("%s",strupr(str));
	else
		printf("%s",strlwr(str));


	//getch();
	return 0;
}