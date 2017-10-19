#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    cin>>n;
    int len = s.length(),inlen;
    inlen = len/n;
    if(len%n!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[(i/inlen)*inlen+inlen-1-(i%inlen)])
        {
            cout<<"NO"<<endl;
            return 0;
        }

//        string one,two;
//        one = s.substr(i,inlen/2);
//        two = s.substr(i+(inlen/2),inlen/2);
//        reverse(two.begin(),two.end());
//        if(one!=two)
//        {
//            cout<<"NO"<<endl;
//            return 0;
//        }


    }
    cout<<"YES"<<endl;

    return 0;
}
