#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    float result;
    int n;
    long long d=1000000007,fin;
    cin>>x>>y>>n;
    long long arr[7];
    arr[1] = x;
    arr[2] = y;
    arr[3] = y-x;
    arr[4] = -x;
    arr[5] = -y;
    arr[6] = x-y;

    n = n%6;
    result = arr[n];

    if(result>=0)
    {
        cout<<(int)result%1000000007<<endl;
    }
    else
    {
        result = -result;
        fin = ceil(result/1000000007);
        cout<<fin<<endl;
        long long s = -result;
        s+=fin*1000000007;
        cout<<s<<endl;
    }

    return 0;
}
