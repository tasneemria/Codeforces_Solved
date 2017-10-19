#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< pair < int,int >, int > umap;
    unordered_map<int,int> x;
    unordered_map<int,int> y;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        pair<int,int> pr;
        int a,b;
        cin>>a>>b;
        pr = make_pair(a,b);
        umap[pr]++;
        x[a]++;
        y[b]++;
    }
    long long calc = 0;
    unordered_map<int,int>::iterator it;
    for(it=x.begin();it!=x.end();it++)
    {
        long long sth = it->second;
        //cout<<it->first<<" "<<it->second<<endl;
        calc+=((sth*(sth-1))/2);
    }
    for(it=y.begin();it!=y.end();it++)
    {
        long long sth = it->second;
        calc+=((sth*(sth-1))/2);
    }

    map< pair< int,int >, int >::iterator it1;
    for(it1=umap.begin();it1!=umap.end();it1++)
    {
        long long sth = it1->second;
        calc-=((sth*(sth-1))/2);
    }

    cout<<calc<<endl;

    return 0;
}
