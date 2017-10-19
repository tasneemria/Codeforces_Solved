#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int pos = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {
            pos = i;
            break;
        }
    }

    for(int i=0;i<str.length();i++)
    {
        if(pos==i)
        {
            continue;
        }
        cout<<str[i];
    }
    cout<<endl;

    return 0;
}
