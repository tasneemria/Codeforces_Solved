#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,idx;
	char s[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char s1[100],save[100];
	char ch;
	scanf("%c",&ch);
	scanf("%s",s1);
	if(ch=='R')
	{
		for(i=0;s1[i];i++)
		{
			for(j=1;s[j];j++)
			{
				if(s1[i]==s[j])
				{
					idx = j;
					//save[k] = s[idx-1];
					printf("%c",s[idx-1]);
					//k++;
					break;
				}
			}
		}
		//save[k]='\0';

	}

	else if(ch=='L')
	{
		for(i=0;s1[i];i++)
		{
			for(j=0;s[j];j++)
			{
				if(s1[i]==s[j])
				{
					idx = j;
					//save[k] = s[idx+1];
					printf("%c",s[idx+1]);
					//k++;
					break;
				}
			}
		}
		//save[k]='\0';

	}

	//printf("%s",save);

	//,,,,,,,,getch();
	return 0;
}