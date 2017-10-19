#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x0,y0;
    cin>>n>>x0>>y0;
    int arr[n][2],pos=0;
    map<pair<int,int>,int> mp;
    for(int i=0;i<n;i++)
    {
        pair<int,int> pr;
        int a,b;
        cin>>a>>b;
        pr = make_pair(a,b);
        mp[pr]++;
        if(mp[pr]==1)
        {
            arr[pos][0] = a;
            arr[pos][1] = b;
            pos++;
        }
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    //cout<<"pos"<<pos<<endl;
    int calc,line=0,flag;
    for(int i=0;i<pos-1;i++)
    {
        flag = 0;
        for(int j=i+1;j<pos;j++)
        {
            calc = (x0-arr[i][0])*(arr[i][1]-arr[j][1]) - (arr[i][0]-arr[j][0])*(y0-arr[i][1]);
            if(calc==0) flag = 1;
        }
        if(flag==1) line++;
    }
    cout<<line<<endl;

    return 0;
}
