#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,temp,tower,height,a,count,arr[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	a = 0;
	tower = 0;
	height = 1;
	while(a<n)
	{
		count = 1;
		for(i=a;i<n-1;i++)
		{
			if(arr[i]==arr[i+1])
				count++;
			else
				break;
		}
		if(height<count)
			height = count;
		a = i+1;
		tower++;
	}

	printf("%d %d",height,tower);


	//getch();
	return 0;
}