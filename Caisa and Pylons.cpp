#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int strength = 0,need = 0;
    for(int i=0;i<n;i++)
    {
        strength+=arr[i]-arr[i+1];
        if(strength<0)
        {
            need+=abs(strength);
            strength = 0;
        }
    }

    cout<<need<<endl;

    return 0;
}
