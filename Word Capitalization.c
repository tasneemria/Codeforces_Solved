#include<stdio.h>
#include<conio.h>

int main()
{
	char str[1000+1];
	scanf("%s",str);
	if(str[0]>=97 && str[0]<=122)
		str[0]-=32;
	printf("%s",str);

	//getch();
	return 0;
}