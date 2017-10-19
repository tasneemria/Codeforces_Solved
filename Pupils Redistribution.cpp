#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n],cnt[6];
    int inp;
    for(int i=1;i<=5;i++)
        cnt[i] = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        cnt[arr1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
        cnt[arr2[i]]++;
    }
    int flag = 0;
    for(int i=1;i<=5;i++)
    {
        if((cnt[i]%2)!=0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1;i<=5;i++)
            cnt[i] = cnt[i]/2;

        int result=0,cnt1[6];
        for(int i=1;i<=5;i++)
        {
            cnt1[i] = 0;
        }

        for(int i=0;i<n;i++)
        {
           cnt1[arr1[i]]++;
        }
        for(int i=1;i<=5;i++)
        {
            if(cnt1[i]<cnt[i])
            {
                result+=cnt[i]-cnt1[i];
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
