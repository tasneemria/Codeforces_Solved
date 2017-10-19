#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string arr[8] = {"nothing","monday","tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    map<string ,int> mp;
    for(int i=1; i<=7; i++)
    {
        mp[arr[i]] = i;
        //cout<<arr[i]<<endl;
    }

    int r1 = mp[s1];
    int r2 = mp[s2];
    //cout<<r1<<endl;
    //cout<<r2<<endl;
    int flag = 0;
    if((r1+3)%7==0 || (r1+2)%7==0 || (r1%7)==0)
    {
        if(s1==s2)
        {
            flag = 1;
            cout<<"YES"<<endl;
            return 0;
        }
    }

    int an = (r1+3)%7;
    if(arr[an]==s2 && an!=0)
    {
        flag = 1;
        cout<<"YES"<<endl;
        return 0;
    }
    an = (r1+2)%7;
    if(arr[an]==s2 && an!=0)
    {
        flag = 1;
        cout<<"YES"<<endl;
        return 0;
    }
    if(arr[r1%7]==s2 && (r1%7)!=0)
    {
        flag = 1;
        cout<<"YES"<<endl;
        return 0;
    }

    if(flag==0)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
