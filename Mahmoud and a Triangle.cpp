#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int flag = 0;
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            flag = 1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;


    return 0;
}
