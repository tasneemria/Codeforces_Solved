#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,sum=0,j;
	char str[3+1];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		for(j=0;j<3;j++){
			if(str[j]=='+'){
				sum++;
				break;
			}
			if(str[j]=='-'){
				sum--;
				break;
			}
		}
	}
	printf("%d",sum);

	//getch();
	return 0;
}