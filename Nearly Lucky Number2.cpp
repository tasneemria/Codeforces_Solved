#include<iostream>
#include<string>
using namespace std;

int main()
{
    string ch;
    cin>>ch;
    int cnt=0;
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]=='4' || ch[i]=='7')
            cnt++;
    }
    if(cnt==4 || cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
