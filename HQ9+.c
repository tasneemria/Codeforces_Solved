#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,flag =0;
	char str[100+1];
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
		{
			flag = 1;
			break;
		}
	}


	if(flag==1)
		printf("YES");
	else
		printf("NO");



	//getch();
	return 0;
}