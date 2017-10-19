#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,k1,k2,a,b;
	scanf("%d%d%d%d",&n1,&n2,&k1,&k2);
	if(k1==k2)
	{
		if(n1>n2)
			printf("First");
		else
			printf("Second");
	}

	else
	{
		if(n1%k1 != 0)
		{
			if(k1==1)
				a = n1;
			else
				a = n1/k1+n1%k1;
		}
		else
		{
			if(k1==1)
				a = n1;
			else
				a = n1/k1-1+n1;
		}

		if(n2%k2 != 0)
		{
			if(k2==1)
				b = n2;
			else
				b = (n2/k2)+(n2%k2);
		}
		else
		{
			if(k2==1)
				b = n2;
			else
				b = n2/k2-1+n2;
		}

		if(a>b)
			printf("First");
		else
			printf("Second");
	}

	//else if(n1<n2)
	//{
	//	if(k1>k2)
	//		printf("Second");
	//	else
	//		printf("First");
	//}

	//else if(n1>n2)
	//{
	//	if(k1>k2)
	//		printf("First");
	//	else
	//		printf("Second");
	//}



	getch();
	return 0;
}