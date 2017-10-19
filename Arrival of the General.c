#include<stdio.h>
#include<conio.h>

int main()
{
	int n,a[100],i,j,f,max,idx,temp,swap=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	f = 0;
	while(f<n)
	{
		max = a[f];
		for(i=f;i<n;i++)
		{
			if(max<a[i])
			{
				max = a[i];
				idx = i;
			}

		}
			temp = a[idx];
			a[idx] = a[f];
			a[f] = temp;
			swap++;
			f++;
	}
	printf("%d",swap);

	getch();
	return 0;
}
