#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[200+1];
	int i,l,space=0;
	scanf("%s",str);
	l = strlen(str);
	for(i=0,space=0;i<l;)
	{
		if(str[i]=='W')
		{
			if(str[i+1]=='U' && str[i+2]=='B')
			{
				space++;
				if(space==1 && i!=0)
					printf(" ");
				i = i+3;
			}
			else
			{
				printf("%c",str[i]);
				i++;
				space=0;
			}
		}
		else
		{
			printf("%c",str[i]);
			i++;
			space=0;
		}
	}

	//getch();
	return 0;
}