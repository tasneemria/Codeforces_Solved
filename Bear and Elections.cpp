#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,vote=0;
    cin>>n;
    double a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n);
    for(int i=n-1; i>0; i--)
    {
        int num,diff;
        if(a[i]>=a[0])
        {
            num =ceil((a[0]+a[i])/2);
            diff = num - a[0];
            a[i]-=diff;
            a[0]+=diff;
            if(a[i]==a[0])
            {
                a[i]--;
                a[0]++;
                vote+=(diff+1);
            }
            else
            {
                vote+=diff;
            }
        }
    }

    cout<<vote<<endl;

    return 0;
}
