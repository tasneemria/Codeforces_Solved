#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],l[n],r[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        l[i] = 0;
        r[i] = 0;
    }
    l[0] = a[0];
    for(int i=1;i<n;i++)
    {
        l[i] = l[i-1]+a[i];
    }
    r[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i] = r[i+1]+a[i];
    }
    int flag=0,part;
    for(int i=0;i<n-1;i++)
    {
        if(l[i]!=0 && r[i+1]!=0)
        {
            flag = 1;
            part = i;
            break;
        }
    }

    if(l[n-1]!=0)
    {
        cout<<"YES"<<endl;
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else if(flag==0)
        cout<<"NO"<<endl;
    else if(flag==1)
    {
        cout<<"YES"<<endl;
        cout<<2<<endl;
        if(part==0)
        {
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<n<<endl;
        }
        else if(part==n-2)
        {
            cout<<1<<" "<<n-1<<endl;
            cout<<n<<" "<<n<<endl;
        }
        else
        {
            cout<<1<<" "<<part+1<<endl;
            cout<<part+2<<" "<<n<<endl;
        }
    }

    return 0;
}
