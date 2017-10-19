#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<str.length()-1;i++)
    {
        string s = str.substr(i,2);
        if(s=="VK")
        {
            cnt++;
        }
    }
    for(int i=0;i<str.length()-1;i++)
    {
        string s = str.substr(i,2);
        if(s=="KK" && str[i-1]!='V')
        {
            cnt++;
            break;
        }
        else if(s=="VV" && str[i+2]!='K')
        {
            cnt++;
            break;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
