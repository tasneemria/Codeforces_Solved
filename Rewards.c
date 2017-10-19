#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3],b[3],n;
	int i,j,count=0,cups=0,medals=0;
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	for(i=0;i<3;i++)
		scanf("%d",&b[i]);

	scanf("%d",&n);

	for(i=0;i<3;i++)
	{
		cups = cups + a[i];
	}

	for(i=0;i<3;i++)
	{
		medals = medals + b[i];
	}

	if(cups<=5 && cups!=0)
		count++;
	else if(cups>5)
	{
		if(cups%5==0)
			count=count+cups/5;
		else
			count=count+cups/5+1;
	}

	if(medals<=10 && medals!=0)
		count++;
	else if(medals>10)
	{
		if(medals%10==0)
			count=count+medals/10;
		else
			count=count+medals/10+1;
	}
	//printf("count = %d\n",count);
	if(count<=n)
		printf("YES");
	else
		printf("NO");


	//getch();
	return 0;
}
