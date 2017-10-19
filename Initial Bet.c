#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,a[5],sum=0;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		sum+=a[i];
	if(sum%5==0 && sum!=0)
		printf("%d",sum/5);
	else
		printf("-1");


	//getch();
	return 0;
}