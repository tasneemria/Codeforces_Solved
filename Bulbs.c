#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,count,num,arr[100000],n,m,k;
	scanf("%d%d",&n,&m);
	j=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		count = 0;
		while(count<num)
		{
			scanf("%d",&arr[j]);
			j++;
			count++;
		}
	}

	//for(i=0;i<j;i++)
	//{
	//	printf("%d ",arr[i]);
	//}
	count = m;
	for(k=1;k<=m;k++)
	{
		for(i=0;i<j;i++)
		{
			if(arr[i] == k)
			{
				count--;
				break;
			}
		}
	}

	if(count==0) printf("YES");
	else printf("NO");

	//getch();
	return 0;
}
