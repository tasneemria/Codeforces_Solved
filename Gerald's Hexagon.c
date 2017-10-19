#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[6],first,second,total1,total2,i;
	for(i=0;i<6;i++)
		scanf("%d",&arr[i]);
	first = 2*arr[0]+1;
	total1 = arr[1]*first+arr[1]*(arr[1]-1);

	second = 2*arr[3]+1;
	total2 = arr[2]*second+arr[2]*(arr[2]-1);

	printf("%d",total1+total2);

	//getch();
	return 0;
}