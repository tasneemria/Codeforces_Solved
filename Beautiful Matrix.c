#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,a,b,sum1=0,sum2=0;
	int mat[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&mat[i][j]);
			if(mat[i][j]==1)
			{
				a = i;
				b = j;
			}
		}

	}

	if(a<3)
		sum1 = 3-a;
	else if(a>3)
		sum1 = a-3;

	if(b<3)
		sum2 = 3-b;
	else if(b>3)
		sum2 = b-3;

	printf("%d",sum1+sum2);

	//printf("%d %d",a,b);

	//getch();
	return 0;
}