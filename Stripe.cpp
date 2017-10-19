#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int right[n],left[n],arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
            right[i] = arr[i];
        else
            right[i] = arr[i]+right[i-1];
    }
    left[n-1] = arr[n-1];
    for(int j=n-2;j>=0;j--)
    {
        left[j] = arr[j]+left[j+1];
    }

//    for(int i=0;i<n;i++)
//        cout<<right[i]<<" ";
//    cout<<endl;
//
//    for(int i=0;i<n;i++)
//        cout<<left[i]<<" ";
//    cout<<endl;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        if(right[i]==left[i+1])
            sum++;
    }
    cout<<sum<<endl;

    return 0;
}
