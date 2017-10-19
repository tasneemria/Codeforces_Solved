#include<stdio.h>
int main()
{
    int M,N,count;
    scanf("%d %d",&M,&N);
    if(M>=1&&M<=16&&N>=1&&N<=16)
    {
        if(M>1 && M%2==0)
        {
            count=(M/2)*(N/1);
        }
        else if(M>1&&M%2==1)
        {
            count=(M/2)*(N/1)+(N/2);
        }
        else if(M=1&&N>1)
        {
            count=N/2;
        }
    }
    printf("%d",count);

	return 0;

}