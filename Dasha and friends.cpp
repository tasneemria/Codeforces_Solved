#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,L;
    cin>>n>>L;
    int kefa[n],sasha[n];
    for(int i=0;i<n;i++)
    {
        cin>>kefa[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>sasha[i];
    }
    int flag=0;
    int dif=abs(kefa[0]-sasha[0]);
    for(int i=0;i<n;i++)
    {
        int check = abs(kefa[i]-sasha[i]);
        if(dif!=check)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else if(flag==1)
        cout<<"NO"<<endl;

    return 0;
}
