#include<bits/stdc++.h>
using namespace std;

long long power(long long a,long long b)
{
    long long num = 1;
    for(int i=0;i<b;i++)
    {
        num*=a;
    }
    return num;
}

int main()
{
    long long n,m;
    cin>>n>>m;
    vector< int >  vct[n+1];
    long long one=0,zero=0,total=0;

    for(int i=0;i<n;i++)
    {
        one = 0;
        zero = 0;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            vct[i].push_back(a);
            if(a) one++;
            else zero++;
        }
        total+=power(2,one)-1;
        total+=power(2,zero)-1;
    }

    for(int i=0;i<m;i++)
    {
        one = 0;
        zero = 0;
        for(int j=0;j<n;j++)
        {
            if(vct[j][i]) one++;
            else zero++;
        }
        total+=power(2,one)-1;
        total+=power(2,zero)-1;
    }
    cout<<total-(n*m)<<endl;

    return 0;
}
