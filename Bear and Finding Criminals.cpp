#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,left,right,criminal=0;
    cin>>n>>a;
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    a--;
    if(t[a]==1) criminal++;
    for(int i=1;;i++)
    {
        left = a-i;
        right = a+i;
        if(left<0 && right>=n)
        {
            break;
        }
        if(left<0)
        {
            criminal+=t[right];
        }
        else if(right>=n)
        {
            criminal+=t[left];
        }
        else if(left>=0 && right<n)
        {
            if(t[left]==1 && t[right]==1)
            {
                criminal+=2;
            }
        }
    }
    cout<<criminal<<endl;

    return 0;
}
