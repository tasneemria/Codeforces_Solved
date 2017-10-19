#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[13];
    int fact = 1;
    for(int i=1;i<=12;i++)
    {
        fact*=i;
        arr[i] = fact;
        //cout<<fact<<endl;
    }
    int mn = min(a,b);
    cout<<arr[mn]<<endl;

    return 0;
}

