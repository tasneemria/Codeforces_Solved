#include<iostream>
using namespace std;

int prime[1502];
int spr=0;

int isPrime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int almost(int n)
{
    int div=0;
    for(int i=0;i<spr;i++)
    {
        if(n%prime[i]==0)
            div++;
    }
    if(div==2)
        return 1;
    else
        return 0;
}

int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(isPrime(i)==1)
            prime[spr++] = i;
    }
    int cnt=0;
    for(int j=6;j<=n;j++)
    {
        if(almost(j)==1)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
