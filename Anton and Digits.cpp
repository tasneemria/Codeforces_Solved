#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    long long sum = 0;
    int arr[] = {k2,k5,k6};
    int miN = k2;
    for(int i=1;i<3;i++)
    {
        if(arr[i]<miN)
            miN = arr[i];
    }
    sum = sum+256*miN;
    k2 = k2-miN;
    if(k2<k3)
    {
        sum = sum+k2*32;
    }
    else
    {
        sum = sum+k3*32;
    }
    cout<<sum<<endl;


    return 0;
}
