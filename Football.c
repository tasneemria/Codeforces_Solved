#include<stdio.h>
#include<conio.h>

int main()
{
	int i,count0,count1;
	char str[100+1];
	scanf("%s",str);
	count0 = 0;
	count1 = 0;
	for(i=0;str[i];i++)
	{
		if(str[i]=='0')
		{
			count0+=1;
			if(str[i+1] == '1' && count0 < 7)
			{
				count0 =0;
			}
			if(count0 >= 7)
			{
				printf("YES");
				break;
			}
		}
		else if(str[i]=='1')
		{
			count1+=1;
			if(str[i+1] == '0' && count1 < 7)
			{
				count1 = 0;
			}
			if(count1 >= 7)
			{
				printf("YES");
				break;
			}
		}
	}

	if(count0<7 && count1<7)
	{
		printf("NO");
	}

	//getch();
	return 0;
}