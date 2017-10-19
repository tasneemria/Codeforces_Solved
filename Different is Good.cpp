#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    map<char,int> mp;
    cin>>str;
    if(n>26)
        cout<<-1<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            mp[str[i]]++;
        }
        int num = 0;
        map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            num++;
        }
        cout<<n-num<<endl;
    }

    return 0;
}
