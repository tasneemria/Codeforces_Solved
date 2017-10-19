#include<stdio.h>
#include<conio.h>

int main()
{
	unsigned int i,j,n;
	unsigned int arr[10000 0];
	scanf("%d",&n);
	for(i=0;i<6;i++)
		arr[i] = i;
	j=6;
	for(i=1;i<=n;i++)
	{
		arr[j] = arr[i];
		arr[j+1] = arr[i];
		j+=2;
	}

	//printf("%d",arr[i-1]);
	if(arr[i-1]==1)
		printf("Sheldon");
	if(arr[i-1]==2)
		printf("Leonard");
	if(arr[i-1]==3)
		printf("Penny");
	if(arr[i-1]==4)
		printf("Rajesh");
	if(arr[i-1]==5)
		printf("Howard");


	//getch();
	return 0;
}