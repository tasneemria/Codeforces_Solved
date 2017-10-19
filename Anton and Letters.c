#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,j,count;
	char str1[10000],str2[1000+1];
	gets(str1);
	j=0;
	for(i=0;str1[i];i++)
	{
		if(str1[i]>=97 && str1[i]<=122)
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';

	count = strlen(str2);
	for(i=0;i<strlen(str2);i++)
	{
		for(j=i+1;j<strlen(str2);j++)
		{
			if(str2[i]==str2[j])
			{
				count--;
				break;
			}
		}
	}

	printf("%d",count);



	//getch();
	return 0;
}