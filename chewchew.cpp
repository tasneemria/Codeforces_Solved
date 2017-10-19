#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(i==0 && str[0]=='9')
        {
            cout<<9;
        }
        else
        {
            if(str[i]-48<57-str[i])
            {
                cout<<str[i];
            }
            else
            {
                str[i] = 57-str[i]+48;
                cout<<str[i];
            }
        }
    }

    return 0;
}
