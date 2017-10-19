#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m,i,j,ria=0;
	char arr[50][50+1];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i+=2)
	{
		for(j=0;j<m;j++)
			arr[i][j] = '#';
		arr[i][j] = '\0';
	}
	for(i=1;i<=n;i+=2)
	{
		if(ria==0)
		{
			for(j=0;j<m-1;j++)
				arr[i][j] = '.';
			arr[i][j] = '#';
			arr[i][j+1] = '\0';
			ria = 1;
		}
		else if(ria==1)
		{
			arr[i][0] = '#';
			for(j=1;j<m;j++)
				arr[i][j] = '.';
			arr[i][j] = '\0';
			ria = 0;
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}



	//getch();
	return 0;
}