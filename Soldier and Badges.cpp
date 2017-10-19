#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum = 0;
//    for(int i=0;i<n;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]==a[i])
        {
            a[i+1]++;
            sum++;
        }
        else if(a[i+1]<a[i])
        {
            int diff = a[i]-a[i+1];
            a[i+1] = a[i]+1;
            sum+=diff+1;
        }
    }
//    for(int i=0;i<n;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
    cout<<sum<<endl;

    return 0;
}
/*
50

49 37 30 2 18 48 14 48 50 27 1 43 46 5 21 28 44 2 24 17 41 38 25 18 43 28 25 21 28 23 26 27 4 31 50 18 23 11 13 28 44 47 1 26 43 25 22 46 32 45
*/
