#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int arr[s1.length()];
    for(int i=0;i<s1.length();i++)
        cin>>arr[i];

    int cnt = 0;
    int j,k;
    for(int i=0;i<s1.length();i++)
    {
        s1[arr[i]-1] = '*';
        for(j=0,k=0;j<s1.length();j++)
        {
            if(s1[j]==s2[k])
            {
                k++;
            }
        }
        if(k==s2.length())
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
