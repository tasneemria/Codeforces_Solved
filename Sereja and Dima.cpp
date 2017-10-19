#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++) cin>>arr[i];

    int s=0,m=0,mov=0;
    for(int i=0,j=n-1; mov<n;)
    {
        mov++;
        if(mov%2==1)
        {
            if(arr[i]>arr[j])
            {
                s+=arr[i];
                i++;
            }
            else
            {
                s+=arr[j];
                j--;
            }
        }
        else
        {
            if(arr[i]>arr[j])
            {
                m+=arr[i];
                i++;
            }
            else
            {
                m+=arr[j];
                j--;
            }
        }
    }

    cout<<s<<" "<<m<<endl;

    return 0;
}
