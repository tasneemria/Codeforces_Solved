#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag = 0;
    int n,m;
    cin>>n>>m;
    char ch;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y')
                flag = 1;
        }
    }
    if(flag==0)
        cout<<"#Black&White"<<endl;
    else if(flag==1)
        cout<<"#Color"<<endl;

    return 0;
}
