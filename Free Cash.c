#include<stdio.h>
#include<conio.h>

int main()
{
	int a,n,i,j,arr[100000][2],max,count=1,p,q;
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{
		for(q=0;q<2;q++)
		{
			scanf("%d",&arr[p][q]);
		}
	}

	a = 0;
	max = 1;
		for(i=1;i<n;i++)
		{
			if(arr[i][0]==arr[i-1][0] && arr[i][1]==arr[i-1][1])
			{
				count++;
				if(max<=count)
                    max = count;
			}
			else
            {
                count = 1;
            }
		}



	printf("%d",max);

	return 0;
}
