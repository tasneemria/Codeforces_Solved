#include<stdio.h>
#include<conio.h>

int Year(int n)
{
    int a,b,c;
    /*scanf("%d",&n);*/
    while(n>0)
    {
        a = n%10;
        b = n/10;
        while(b>0)
        {
            c = b%10;
            b = b/10;
            if(a==c)
            {
                /*printf("Ugly year");*/
                return 0;
            }
        }
        if(a==c)
        {
            break;
        }
        else
        {
            n = n/10;
        }
    }
    if(n>=1 && n<=9)
    {
        /*printf("Beautiful year");*/
        return 1;
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1000 && n<=9000)
    {
        for(i=n+1; ; i++)
        {
            if(Year(i)==1)
            {
                printf("%d",i);
                break;
            }
        }
    }

	getch();
	return 0;
}