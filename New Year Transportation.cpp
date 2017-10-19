#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n+2];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;)
    {
        i = i+arr[i];
        if(i==t)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(i>t)
        {
            cout<<"NO"<<endl;
            break;
        }

    }


    return 0;
}
