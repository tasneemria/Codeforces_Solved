#include<iostream>

using namespace std;

int isPrime(int n)
{
    int f=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0) return 1;
    if(f==1) return 0;
}

int main()
{
    int n,k;
    int pos=0,flag=0,arr[1000];
    int i,j,r,cnt=0;
    cin>>n>>k;

    for(i=2;i<=n;i++)
    {
        for(j=2;j!=i;j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0) arr[pos++] = i;
        flag = 0;
    }

    for(r=0;r<pos-1;r++)
    {
        if(isPrime(arr[r]+arr[r+1]+1)==1 && (arr[r]+arr[r+1]+1)<=n)
        {
            cnt++;
        }
    }
    if(cnt>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
