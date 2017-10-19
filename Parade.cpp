#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0,left=0,right=0;
    int diff[n];
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        diff[i] = a-b;
        if(a<=b)
            left++;
    }
    right = n-left;
    if(left==n || right==n)
    {
        cout<<0<<endl;
    }
    else if(left>right)
    {
        int mn = 0,idx;
        for(int i=0;i<n;i++)
        {
            if(mn<diff[i] && diff[i]>0)
            {
                mn = diff[i];
                idx = i;
            }
        }
        cout<<idx+1<<endl;
    }
    else if(left<right)
    {
        int mx=0,idx;
        for(int i=0;i<n;i++)
        {
            if(mx>diff[i] && diff[i]<0)
            {
                mx = diff[i];
                idx = i;
            }
        }
        cout<<idx+1<<endl;
    }
    else if(left==right)
    {
        int mn=0,idx1;
        for(int i=0;i<n;i++)
        {
            if(mn<diff[i] && diff[i]>0)
            {
                mn = diff[i];
                idx1 = i;
            }
        }
        int mx=0,idx;
        for(int i=0;i<n;i++)
        {
            if(mx>diff[i] && diff[i]<0)
            {
                mx = diff[i];
                idx = i;
            }
        }
        mx = -mx;
        if(mx>=mn)
        {
            cout<<idx+1<<endl;
        }
        else
        {
            cout<<idx1+1<<endl;
        }
    }

    return 0;
}
