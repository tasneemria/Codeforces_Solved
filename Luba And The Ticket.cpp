#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[6];
    int diff,cnt1,cnt2;
    for(int i=0;i<6;i++)
    {
        arr[i] = (int)s[i]-48;
    }
    cnt1 = arr[0]+arr[1]+arr[2];
    cnt2 = arr[3]+arr[4]+arr[5];
    diff = abs(cnt1-cnt2);
    if(cnt1>cnt2)
    {
        int f1=0,f2=0;
        arr[3] = 9-arr[3];
        arr[4] = 9-arr[4];
        arr[5] = 9-arr[5];
        int nw = diff;
        for(int i=0;i<3;i++)
        {
            if(nw>0)
            {
                nw-=arr[i];
                f1++;
            }
        }
        if(nw<=0)
        {
            nw = diff;
        }
        else
        {
            f2 = f1;
        }
        for(int i=3;i<6;i++)
        {
            if(nw>0)
            {
                nw-=arr[i];
                f2++;
            }
        }
        int mn = min(f1,f2);
        cout<<mn<<endl;
    }
    else if(cnt1<cnt2)
    {
        int f1=0,f2=0;
        arr[0] = 9-arr[0];
        arr[1] = 9-arr[1];
        arr[2] = 9-arr[2];
        int nw = diff;

        for(int i=3;i<6;i++)
        {
            if(nw>0)
            {
                nw-=arr[i];
                f1++;
            }
        }
        if(nw<=0)
        {
            nw = diff;
        }
        else
        {
            f2 = f1;
        }
        for(int i=0;i<3;i++)
        {
            if(nw>0)
            {
                nw-=arr[i];
                f2++;
            }
        }
        int mn = min(f1,f2);
        cout<<mn<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
