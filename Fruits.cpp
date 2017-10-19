#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string fruit;
    int n,m,pos=0;
    cin>>n>>m;
    int price[100],numF[100];
    map< string, int > mp;
    for(int i=0;i<n;i++)
        cin>>price[i];
    for(int i=0;i<m;i++)
    {
        cin>>fruit;
        mp[fruit]+=1;
    }
    map< string, int >::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        numF[pos++] = it->second;
    }

    sort(price,price+n);
    sort(numF,numF+pos);
//    for(int i=0;i<pos;i++)
//        cout<<numF[i]<<" ";
//    cout<<endl;
//
//    for(int i=0;i<n;i++)
//        cout<<price[i]<<" ";
//    cout<<endl;

    int maxP=0,minP=0;
    for(int i=pos-1,j=0;i>=0;i--,j++)
    {
        minP = minP+numF[i]*price[j];
    }


    for(int i=pos-1,j=n-1;i>=0;i--,j--)
    {
        maxP = maxP+numF[i]*price[j];
    }

    cout<<minP<<" "<<maxP<<endl;

    return 0;
}
