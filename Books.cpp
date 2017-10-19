#include<bits/stdc++.h>
using namespace std;

long long n,t;
long long arr[100001];

int main()
{
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        //arr1[i] = arr1[i-1]+arr[i];
    }
    int idx=1,book=0,cnt=0,total=0;
    for(int i=1;i<=n;i++)
    {
        total+=arr[i];
        cnt++;
        while(total>t)
        {
            cnt--;
            total-=arr[idx];
            idx++;
        }
        //cout<<total<<endl;
        book = max(book,cnt);
    }
    cout<<book<<endl;

    return 0;
}
