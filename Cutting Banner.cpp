#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string s = "CODEFORCES";
    if(str.length()<10)
        cout<<"NO"<<endl;
    else
    {
        int i,j;
        for(i=0,j=0;i<str.length();i++)
        {
            if(j==9)
                break;
            if(str[i]==s[j])
            {
                j++;
            }
            cout<<j<<endl;
        }

        if(j==9)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
