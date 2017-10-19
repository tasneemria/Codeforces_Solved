#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	char s[100+1];
	char s1[] = "hello";
	scanf("%s",s);
	j = 0;
	for(i=0;s[i];i++)
	{
		if(s[i] == s1[j])
			j++;
		if(j==5)
			break;
	}
	if(j==5)
		printf("YES");
	else
		printf("NO");

	//getch();
	return 0;
}