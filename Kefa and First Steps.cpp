#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxV = 1,cnt=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>=arr[i])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if(maxV<=cnt)
            maxV = cnt;
    }

    cout<<maxV<<endl;

    return 0;
}
