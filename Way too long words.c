#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n,i,l;
	char str[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		l = strlen(str);
		if(l>10){
			printf("%c",str[0]);
			printf("%d",l-2);
			printf("%c",str[l-1]);
			printf("\n");
		}
		else if(l<=10){
			printf("%s\n",str);
		}
	}
	return 0;
}