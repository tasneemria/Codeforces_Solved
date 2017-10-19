#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        while(arr[i]%2==0) {arr[i]/=2;}
        while(arr[i]%3==0) {arr[i]/=3;}
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}
