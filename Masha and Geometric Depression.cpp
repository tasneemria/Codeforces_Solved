#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long b,q,l,m;
    cin>>b>>q>>l>>m;
    map<long long,int> mp;
    for(int i=0;i<m;i++)
    {
        long long a;
        cin>>a;
        mp[a] = 2;
    }
    if(b==0 && q==0)
    {
        if(mp[0]==2)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<"inf"<<endl;
        }
    }
    else if(b==0 && q!=0)
    {
        if(mp[0]==2)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<"inf"<<endl;
        }
    }
    else if(q==0 && b!=0)
    {
        if(abs(b)>l)
        {
            cout<<0<<endl;
        }
        else if(mp[0]==2 && mp[2]!=2)
        {
            cout<<1<<endl;
        }
        else if(mp[0]==2 && mp[2]==2)
        {
            cout<<0<<endl;
        }
            //
        /*if(mp[0]==2 && mp[b]!=2 && abs(b)<=l)
        {
            cout<<1<<endl;
        }
        else if(mp[0]==2 && mp[b]==2)
        {
            cout<<0<<endl;
        }
        else if(mp[b]!=2 && abs(b)>l)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<"inf"<<endl;
        }*/
    }
    else if(q==1)
    {
        if(mp[b]==2 || abs(b)>l)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<"inf"<<endl;
        }
    }
    else if(q==-1)
    {
        if(mp[b]==2 && mp[-b]==2)
        {
            cout<<0<<endl;
        }
        else if((mp[b]!=2 || mp[-b]!=2) && abs(b)>l)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<"inf"<<endl;
        }
    }
    else
    {
        long long val = b,cnt=0;
        while(1)
        {
            if(abs(val)>l)
                break;
            if(mp[val]!=2)
            {
                cnt++;
            }
            val = val*q;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
