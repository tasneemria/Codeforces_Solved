#include<stdio.h>
#include<conio.h>

int total(int n)
{
	if(n==1)
		return 1;
	else
		return ((n*(n+1))/2) + total(n-1);
}


int main()

{
	int input,i;
	scanf("%d",&input);
	for(i=1;;i++)
	{
		if(total(i)>input)
			{
				printf("%d",i-1);
				break;
		    }
		else if(total(i)==input)
		{
			printf("%d",i);
			break;
		}
	}



	// getch();
	return 0;
}