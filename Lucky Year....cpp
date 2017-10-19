#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int z=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='0') z++;
    }
    if(str.length()-z<=1)
    {
        str[0] = '1';
        cout<<str<<endl;
    }
    else
    {
        string s = str;
        if(s[0]=='9')
        {
            s[0] = '1';
            for(int i=1;i<str.length();i++) s[i] = '0';
            s = s+"0";

        }
        else
        {
            s[0]++;
            for(int i=1;i<str.length();i++) s[i]='0';
        }
        int a,b;
        a = stoi(str);
        b = stoi(s);
        cout<<b-a<<endl;
    }

    return 0;
}
