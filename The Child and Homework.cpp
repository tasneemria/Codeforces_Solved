#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    int arr[4],an[4];
    arr[0] = a.length()-2;
    arr[1] = b.length()-2;
    arr[2] = c.length()-2;
    arr[3] = d.length()-2;
    char ch[4] = {'A','B','C','D'};
    for(int i=0;i<4;i++) an[i] = arr[i];
    //for(int i=0;i<4;i++) cout<<arr[i]<<endl;
    int f1=0,f2=0;
    sort(arr,arr+4);
    int j,mn,mx;
    mn = arr[0]*2;
    mx = arr[3]/2;
    for(j=1;j<4;j++)
    {
        if(mn>arr[j])
        {
            f1 = 1;
            break;
        }
    }

    for(j=0;j<3;j++)
    {
        if(arr[j]*2>arr[3])
        {
            f2 = 1;
            break;
        }
    }

    //cout<<f1<<" "<<f2<<endl;

    if(f1==1 && f2==1)
    {
            cout<<"C"<<endl;
    }
    else if(f1==0 && f2==0)
    {
            cout<<"C"<<endl;
    }
    else if(f1==0)
    {
        for(int i=0;i<4;i++)
        {
            if(arr[0]==an[i])
            {
                cout<<ch[i]<<endl;
                return 0;
            }
        }
    }
    else if(f2==0)
    {
        for(int i=0;i<4;i++)
        {
            if(arr[3]==an[i])
            {
                cout<<ch[i]<<endl;
                return 0;
            }
        }
    }



    return 0;
}
