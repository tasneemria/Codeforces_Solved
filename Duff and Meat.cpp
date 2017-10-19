#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    int pos,miN=1000;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(miN>arr[i][1])
        {
            miN = arr[i][1];
        }
        sum = sum+arr[i][0]*miN;
    }
    cout<<sum<<endl;

    return 0;
}
