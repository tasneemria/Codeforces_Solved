#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l[n],r[n],L=0,R=0;
    for(int i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
        L+=l[i];
        R+=r[i];
    }
    int mx = (abs)(L-R);
    int idx = -1;
    for(int i=0;i<n;i++)
    {
        if(mx<(abs)((L-l[i]+r[i])-(R-r[i]+l[i])))
        {
            mx = (abs)((L-l[i]+r[i])-(R-r[i]+l[i]));
            idx = i;
        }
    }
    cout<<idx+1<<endl;

    return 0;
}
