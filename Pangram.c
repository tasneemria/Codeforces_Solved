#include<stdio.h>
#include<conio.h>


int main()
{
	char i,j,str[100+1];
	int k,l,sum=0;
	scanf("%d",&l);
	scanf("%s",str);
	
	if(l<26)
	{
		printf("NO");
	}
	else
	{
		for(i='a',j='A';i<='z';i++,j++)
		{
			for(k=0;k<l;k++)
			{
				if(str[k]==i || str[k]==j)
				{
					sum++;
					break;
				}
			}
		}
		if(sum==26)
			printf("YES");
		else
			printf("NO");
	}

	//getch();
	return 0;
}