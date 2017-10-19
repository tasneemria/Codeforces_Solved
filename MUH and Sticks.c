#include<stdio.h>
#include<conio.h>

int legs(int *b)
{
	int i,j,a,count;
	for(i=0;i<6;i++)
	{
		a = *(b+i);
		count = 1;
		for(j=i+1;j<6;j++)
		{
			if(a == *(b+j))
			{
				count++;
			}
		}
		if(count==4)
			return 1;
		else if(count==5)
			return 2;//bear
		else if(count==6)
			return 3;//elephant
	}
	return 0;
}

int main()
{
	int arr[6],a,i,j,count;
	for(i=0;i<6;i++)
		scanf("%d",&arr[i]);
	//printf("%d",legs(arr));
	if(legs(arr)==0)
		printf("Alien");
	else if(legs(arr)==2)
		printf("Bear");
	else if(legs(arr)==3)
		printf("Elephant");
	else if(legs(arr)==1)
	{
		for(i=0;i<6;i++)
		{
			a = arr[i];
			count = 1;
			for(j=i+1;j<6;j++)
			{
				if(a == arr[j])
					count++;
			}
			if(count==1)
			{
				printf("Bear");
				break;
			}
			if(count==2)
			{
				printf("Elephant");
				break;
			}
		}
	}

	getch();
	return 0;
}












