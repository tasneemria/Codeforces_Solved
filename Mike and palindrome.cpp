#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0,j=str.length()-1;i<str.length()/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            cnt++;
        }
    }
    if(cnt==0 && str.length()%2==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(cnt==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
