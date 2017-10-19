#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0,mn;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    mn = sum;
    sort(arr,arr+5);
    for(int i=0;i<4;)
    {
        int a;
        if(arr[i]==arr[i+1])
        {
            if(arr[i]==arr[i+2])
            {
                a = sum - 3*arr[i];
                if(mn>a) mn = a;
                i+=2;
            }
            else
            {
                a = sum - 2*arr[i];
                if(mn>a) mn = a;
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    cout<<mn<<endl;

    return 0;
}
