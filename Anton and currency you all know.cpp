#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int last = str[str.length()-1];
    for(int i=0;i<str.length()-1;i++)
    {
        int a;
        a = str[i];
        if(a<last && (a%2)==0)
        {
            char ch = str[i];
            str[i] = str[str.length()-1];
            str[str.length()-1] = ch;
            cout<<str<<endl;
            return 0;
        }
    }

    for(int i=str.length()-2;i>=0;i--)
    {
        int a = str[i];
        if(a%2==0)
        {
            char ch = str[i];
            str[i] = str[str.length()-1];
            str[str.length()-1] = ch;
            cout<<str<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    return 0;
}
