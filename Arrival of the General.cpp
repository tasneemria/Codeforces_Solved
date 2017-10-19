#include<iostream>
using namespace std;

int main()
{
    int n,arr[101],swp=0,Max=0,Min=200;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(Max<arr[i])
        {
            Max = arr[i];
        }
        if(Min>arr[i])
        {
            Min = arr[i];
        }
    }

    int pos1,pos2;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==Max)
        {
            pos1 = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==Min)
        {
            pos2 = i;
            break;
        }
    }
    if(pos1<pos2)
    {
        cout<<pos1+n-1-pos2<<endl;
    }
    else
    {
        cout<<pos1+n-2-pos2<<endl;
    }

    return 0;
}

