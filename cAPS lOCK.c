#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[100+1];
	int i,flag = 0;
	scanf("%s",str);
	for(i=1;str[i];i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}

	if(flag==1 && str[0]>=97 && str[0]<=122)
	{
		str[0] = str[0] -32;
		for(i=1;str[i];i++)
		{
			if(str[i] >= 65 && str[i] <= 90)
				str[i] = str[i]+32;
		}
	}

	else if(flag ==1 && str[0] >= 65 && str[0] <= 90)
	{
		for(i=0;str[i];i++)
		{
			if(str[i] >= 65 && str[i] <= 90)
				str[i] = str[i]+32;
		}
	}

	if(strlen(str)==1)
	{
		if(str[0] >= 65 && str[0] <= 90)
			str[0] = str[0] + 32;
		else
			str[0] = str[0] - 32;
	}

	printf("%s",str);	
	

	//getch();
	return 0;
}