#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    int before,after,flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        cin>>before>>after;
        if(before>=2400 && after>before)
        {
            flag = 1;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
