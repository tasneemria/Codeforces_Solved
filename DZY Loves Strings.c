#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int w[26],i,j,k,large,current,total=0,len;
	char s[1000];
	scanf("%s",s);
	scanf("%d",&k);
	for(i=0;i<26;i++)
	{
		scanf("%d",&w[i]);
	}
	large = w[0];
	for(i=1;i<26;i++)
	{
		if(large<w[i])
			large=w[i];
	}

	for(i=0,j=1;s[i];i++,j++)
	{
		current = s[i]-'a';
		total = total+w[current]*j;
	}
	//printf("%d\n",total);
	len=strlen(s);
	k=k+len;
	for(i=len+1;i<=k;i++)
	{
		total=total+large*i;
	}

	printf("%d",total);

	//getch();
	return 0;
}