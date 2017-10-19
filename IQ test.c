#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,s_odd=0,s_even=0,a[100],n,idx,idx1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			s_even++;
			idx = i+1;
		}
		else
		{
			s_odd++;
			idx1 = i+1;
		}
	}

	if(s_even==1)
		printf("%d",idx);
	else if(s_odd==1)
		printf("%d",idx1);

	//getch();
	return 0;
}