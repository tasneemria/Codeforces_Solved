#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='1' && str[i]!='4')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(str[0]=='4')
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='4' && i<str.length()-2)
        {
            if(str[i+1]=='4' && str[i+2]=='4')
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
