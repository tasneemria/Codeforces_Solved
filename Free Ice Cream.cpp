#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    int dis=0;
    for(int i=0;i<n;i++)
    {
        int num;
        char ch;
        cin>>ch>>num;
        if(ch=='+')
        {
            x+=num;
        }
        else if(ch=='-')
        {
            if(num>x)
            {
                dis++;
            }
            else
            {
                x-=num;
            }
        }
    }

    cout<<x<<" "<<dis<<endl;

    return 0;
}
