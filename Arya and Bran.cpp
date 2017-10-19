#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,choc=0,bran=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        choc+=arr[i];
        if(choc>=8)
        {
            bran+=8;
            choc-=8;
        }
        else
        {
            bran+=choc;
            choc = 0;
        }

        if(bran>=k)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    return 0;
}
