#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n],tfive=0,fifty=0,hun=0;
    for(long long i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(arr[0]==50 || arr[0]==100)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        tfive++;
        for(long long i=1; i<n; i++)
        {
            if(arr[i]==25)
            {
                tfive++;
            }
            else if(arr[i]==50)
            {
                if(tfive<=0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                fifty++;
                tfive--;
            }
            else if(arr[i]==100)
            {
                hun++;
                if(fifty>=1 && tfive>=1)
                {
                    fifty-=1;
                    tfive-=1;
                }
                else if(tfive>=3)
                {
                    tfive-=3;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
