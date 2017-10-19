#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1,j=n*n;i<=(n*n)/2;)
    {
        for(int k=i;k<i+(n/2);k++)
        {
            cout<<k<<" ";
        }
        for(int k=j;k>j-(n/2);k--)
        {
            cout<<k<<" ";
        }
        i = i+(n/2);
        j = j-(n/2);
        cout<<endl;
    }

    return 0;
}
