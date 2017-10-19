#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,n1,n2;
    cin>>n>>n1>>n2;
    int arr[100000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    float r1=0,r2=0;
    if(n1==n2)
    {
        int last;
        for(int i=n-1;i>=n-n1;i--)
        {
            r1+=arr[i];
            last = i;
        }
        r1 = r1/(float)n1;
        for(int i=last-1;i>=last-n2;i--)
        {
            r2+=arr[i];
        }
        r2 = r2/(float)n2;
        float sum = r1+r2;
        printf("%.9f",sum);
    }
    else
    {
        if(n1>n2)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        int last;
        for(int i=n-1;i>=n-n1;i--)
        {
            r1+=arr[i];
            last = i;
        }
        r1 = r1/(float)n1;
        for(int i=last-1;i>=last-n2;i--)
        {
            r2+=arr[i];
        }
        r2 = r2/(float)n2;
        float sum = r1+r2;
        printf("%.9f",sum);
    }


    return 0;
}
