#include<iostream>
using namespace std;

int main()
{
    int arr[101];
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        arr[a] = i;
    }

    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
