#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str,str2;
    cin>>str;
    //cout<<str.length()<<endl;
    int cnt = 0;
    for(int i=0;i<str.length()-1;i++)
    {
        str2 = str.substr(i,2);
        if(str2=="UD" || str2=="DU" || str2=="RL" || str2=="LR")
        {
            cnt++;
        }
    }
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length()-1;i++)
    {
        str2 = str.substr(i,2);
        if(str2=="UD" || str2=="DU" || str2=="RL" || str2=="LR")
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
