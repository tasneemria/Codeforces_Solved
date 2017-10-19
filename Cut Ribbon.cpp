#include<bits/stdc++.h>
using namespace std;

int ribon(int *arr,int len,int i)
{
    if(len==0)
        return 0;
    if(len<0)
        return -INFINITY;
    if(i==-1)
        return -INFINITY;
    return max(1+ribon(arr,len-arr[i],i),ribon(arr,len,i-1));
}

int main()
{
    int len,arr[3];
    cin>>len>>arr[0]>>arr[1]>>arr[2];
    cout<<ribon(arr,len,2)<<endl;

    return 0;
}
