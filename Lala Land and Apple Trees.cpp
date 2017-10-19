#include<bits/stdc++.h>
using namespace std;

bool sortcol(const vector<int>& v1,const vector<int>& v2)
{
    return v1[0]<v2[0];
}

int main()
{
    int n;
    cin>>n;
    vector< vector<int> > vct;

    for(int i=0; i<n; i++)
    {
        vector<int> row;
        for(int j=0;j<2;j++)
        {
            int a;
            cin>>a;
            row.push_back(a);
        }
        vct.push_back(row);
        //cout<<vct[i][0]<<" "<<vct[i][1];
    }
    int negx=0,posx=0;
    for(int i=0;i<n;i++)
    {
        if(vct[i][0]<0) negx++;
        else posx++;
        //cout<<vct[i][0]<<" "<<vct[i][1];
    }

    int mn = min(negx,posx);
    long long sum = 0;
    sort(vct.begin(),vct.end(),sortcol);
    for(int i=negx-1;i>negx-mn-1;i--)
    {
        sum+=vct[i][1];
    }
    for(int i=negx;i<negx+mn;i++)
    {
        sum+=vct[i][1];
    }
    if(negx<posx)
    {
        sum+=vct[negx+mn][1];
    }
    else if(negx>posx)
    {
        sum+=vct[negx-mn-1][1];
    }

    cout<<sum<<endl;

    return 0;
}
