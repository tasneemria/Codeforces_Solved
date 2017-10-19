#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,count,sum;
	char n1[1000+1],n2[1000+1];
	scanf("%d",&n);
	scanf("%s",n1);
	scanf("%s",n2);
	sum = 0;
	for(i=0;i<n;i++)
	{
		count = n1[i]-n2[i];
		if(count>0)
		{
			if(count>5)
				sum = sum+10-count;
			else
				sum = sum+count;
		}
		else if(count<0)
		{
			count=-count;
			if(count>5)
				sum = sum+10-count;
			else
				sum = sum+count;
		}
	}
	
	printf("%d",sum);

	//getch();
	return 0;
}