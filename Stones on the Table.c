#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,count,j;
	char str[50+1];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&str[i]);
	}
	str[i] = '\0';
	printf("%c\n",str[0]);
	printf("%c\n",str[1]);
	printf("%c\n",str[2]);
	printf("%c\n",str[3]);
	printf("%c\n",str[4]);
	
	count = 0;
	for(i=0;str[i];i++)
	{
		if(str[i] == str[i+1])
			{
				count = count+1;
			}
	}

	printf("%d",count);

	getch();
	return 0;
}
