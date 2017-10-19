#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    long long mx=-1,calc1,calc2;
    for(int i=0;i<n;i++)
    {
        calc1 = a[i];
        calc2 = b[i];
        for(int j=i;j<n;j++)
        {
            calc1 = calc1|a[j];
            calc2 = calc2|b[j];
            if(calc1+calc2>mx)
            {
                mx = calc1+calc2;
            }
        }
    }

    cout<<mx<<endl;

    return 0;
}
