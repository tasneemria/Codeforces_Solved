#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<char,int> mp;
    char key[n],room[n],ch[n+1];
    int cnt = 0;
    for(int i=1;i<n;i++)
    {
        cin>>key[i]>>room[i];
        room[i]+=32;
        //cout<<key[i]<<room[i]<<endl;
        mp[key[i]]++;
        if(mp[room[i]]==0)
            cnt++;
        else
            mp[room[i]]--;
    }

    cout<<cnt<<endl;

    return 0;
}
