#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,l,n,count;
	int a[100000];
	scanf("%d",&n);
	count = n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==4)
			{
				count = count-1;
				a[j] = 4;
				printf("1 %d\n",count);
				break;
			}
			else if(a[i]+a[j]<4)
			{
				for(k=j+1;k<n;k++)
				{
					if(a[i]+a[j]+a[k]==4)
					{
						count = count-2;
						a[j] = 4;
						a[k] = 4;
						printf("2 %d\n",count);
						break;
					}
					else if(a[i]+a[j]+a[k]==3)
					{
						for(l=k+1;l<n;l++)
						{
							if(a[i]+a[j]+a[k]+a[l]==4)
							{
								count = count-3;
								a[j] = 4;
								a[k] = 4;
								a[l] = 4;
								printf("3 %d\n",count);
								break;
							}
						}
					}
				}
			}
			else
			{
				break;
			}
		}
	}

	printf("%d",count);

	getch();
	return 0;
}