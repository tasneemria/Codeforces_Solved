#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    map < char , char > mp;

    int i,j,k,sum=0;
    cin>>s1;
    cin>>s2;
    int l=s1.length();
    char c1[l],c2[l];

    if(s1.compare(s2)==0) {cout<<"0";return 0;}
    for(i=0;i<l;i++)
    {
        if(s1[i] != s2[i])
        {
            if(mp[s1[i]] == 0)
            {
               mp[s1[i]]=s2[i];
               mp[s2[i]]=s1[i];
               c1[sum]=s1[i];
               c2[sum]=s2[i];
               sum++;
            }
            else if(mp[s1[i]] != s2[i])
            {
                cout<<"-1";
                return 0;
            }
        }
    }
    cout<<sum<<endl;
    for(i=0;i<sum;i++)
    {
        cout<<c1[i]<<" "<<c2[i]<<endl;
    }
}


