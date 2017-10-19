#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100+1],ch;
	int i,l;
	scanf("%s",str);
	l = strlen(str);
	for(i=0;i<l;i++){
		ch = str[i];
		if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'&&ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='Y'&&ch!='y'){
			if(ch>=65 && ch<=90){
				printf(".%c",ch+32);
			}
			else{
				printf(".%c",ch);
			}
		}
	}

	return 0;
}