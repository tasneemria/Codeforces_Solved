#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    char ch = 'a';
    int flag = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
        {
            ch++;
        }
        else if(str[i]>ch)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}
