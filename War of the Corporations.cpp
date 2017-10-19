#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1 = s1.length();
    int len2 = s2.length();
    int cnt=0;
    for(int i=0;i<=len1-len2;)
    {
        string s = s1.substr(i,len2);
        if(s==s2)
        {
            cnt++;
            i+=len2;
        }
        else
        {
            i++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
