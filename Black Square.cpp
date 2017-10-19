#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    for(int i=1;i<=4;i++)
    {
        cin>>a[i];
    }
    string str;
    cin>>str;
    int sum = 0;
    for(int i=0;i<str.length();i++)
    {
        int b = str[i]-48;
        sum+=a[b];
    }
    cout<<sum<<endl;

    return 0;
}
