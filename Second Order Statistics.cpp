#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,arr[100];
    int minV = 1000;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(minV>arr[i])
            minV = arr[i];
    }
    sort(arr,arr+n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>minV)
        {
            flag = 1;
            cout<<arr[i]<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;

    return 0;
}
