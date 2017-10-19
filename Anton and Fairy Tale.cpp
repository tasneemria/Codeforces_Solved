#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main()
{
    long long n,m,sum=0;
    cin>>n>>m;
    for(int i=1;i<1000000;i++)
    {
        arr[i] = (i*(i+1))/2;
    }
    if(m>=n-1)
    {
        cout<<n<<endl;
    }
    else
    {
        sum = m;
        long long num = n-sum;
        for(int i=1;i<1000000;i++)
        {
            if(num>arr[i] && num<=arr[i+1])
            {
                sum+=(i+1);
                break;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
