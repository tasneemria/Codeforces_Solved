#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100];
	int i,j,l,count;
	scanf("%s",str);
	l = strlen(str);
	count = l;
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			{
				count--;
				break;
			}
		}
	}
	if(count%2==0)
		printf("CHAT WITH HER!");
	else
		printf("IGNORE HIM!");

	getch();
	return 0;
}