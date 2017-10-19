#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    long long a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int pos = -1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            pos = i;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        int pos1 = -1;
        for(int i=pos+1;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                pos1 = i;
                break;
            }
        }
        if(pos1==-1)
        {
            pos1 = n-1;
            sort(a+pos,a+pos1+1);
            int srt = 1;
            for(int i=0;i<n;i++)
            {
                if(a[i]>a[i+1])
                {
                    srt = 0;
                    break;
                }
            }
            if(srt==0)
                cout<<"no"<<endl;
            else
            {
                cout<<"yes"<<endl;
                cout<<pos+1<<" "<<pos1+1<<endl;
            }
        }
        else
        {
            sort(a+pos,a+pos1+1);
            int srt = 1;
            for(int i=0;i<n;i++)
            {
                if(a[i]>a[i+1])
                {
                    srt = 0;
                    break;
                }
            }
            if(srt==0)
            {
                cout<<"no"<<endl;
            }
            else
            {
                cout<<"yes"<<endl;
                cout<<pos+1<<" "<<pos1+1<<endl;
            }
        }
    }

    return 0;
}
