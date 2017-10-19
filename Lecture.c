#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char language[3000][15][15];
	char str[3000][15];
	int i,j,k,n,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
		for(j=0;j<2;j++)
			scanf("%s",language[i][j]);

	for(i=0;i<n;i++)
		scanf("%s",str[i]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<2;k++)
			{
				if(strcmp(str[i],language[j][k])==0)
				{
					if(strlen(language[j][0])>strlen(language[j][1]))
					{
						printf("%s ",language[j][1]);
						break;
					}
					else
					{
						printf("%s ",language[j][0]);
						break;
					}
				}
			}
			if(strcmp(str[i],language[j][k])==0)
			{
				break;
			}
		}
	}



	//getch();
	return 0;
}