#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,j,temp;
	char s[100+1],s2[101];
	scanf("%s",s);
	j = 0;
	for(i=0;s[i];i++)
	{
		if(s[i]=='1' || s[i]=='2' || s[i]=='3')
		{
			s2[j] = s[i];
			j++;
		}
	}
	s2[j] = '\0';
	
	for(i=0;i<strlen(s2);i++)
	{
		for(j=0;j<strlen(s2)-i-1;j++)
		{
			if(s2[j] > s2[j+1])
			{
				temp = s2[j];
				s2[j] = s2[j+1];
				s2[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<strlen(s2)-1;i++)
		printf("%c+",s2[i]);
	printf("%c",s2[i]);

	//getch();
	return 0;
}