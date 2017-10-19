#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n+2];
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1,j=n;i<=n/2;i=i+2,j=j-2)
    {
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}
