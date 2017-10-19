#include<bits/stdc++.h>
using namespace std;

bool sortcol( const vector<long long>& v1, const vector<long long>& v2 )
{
    return v1[0] > v2[0];
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);


    long long sum=0;
    long long n,f;
    cin>>n>>f;
    long long k[n+1],l[n+1];
    vector<long long> v;
    for(int i=0;i<n;i++)
    {
        cin>>k[i]>>l[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=min(k[i],l[i]);
        v.push_back(min(2*k[i],l[i])-min(k[i],l[i]));
    }
    sort(v.begin(),v.end());
    for(int i=n-1;f>0;i--)
    {
        sum+=v[i];
        f--;
    }


    cout<<sum<<endl;


    return 0;
}
