#include<iostream>
using namespace std;

int countArr(int *arr, int len)
{
    int cnt=0;
    for(int i=0;i<len;i++)
    {
        cnt+=arr[i];
    }
    return cnt;
}

int main()
{
    int n,a[10000],save[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        save[i] = a[i];
    }

    int total = 0;

    for(int i=0;i<=n/2;i++)
    {
        save[i] = save[i]*(-1);
        if(total<countArr(save,n))
            total = countArr(save,n);
        //cout<<"........"<<total<<endl;
        for(int j=n-1;j>i;j--)
        {
            save[j] = save[j]*(-1);
            if(total<countArr(save,n))
            {
                total = countArr(save,n);
            }
        }
        for(int o=i+1;o<n;o++)
        {
            save[o] = a[o];
        }
    }

    for(int i=0;i<n;i++)
    {
     //   cin>>a[i];
        save[i] = a[i];
    }

    for(int i=n-1;i>=n/2;i--)
    {
        save[i] = save[i]*(-1);
        if(total<countArr(save,n))
        {
            total = countArr(save,n);
        }
        for(int j=0;j<i;j++)
        {
            save[j] = save[j]*(-1);
            if(total<countArr(save,n))
                total = countArr(save,n);
        }
        for(int o=i-1;o>=0;o--)
            save[o] = a[o];
//        for(int u=0;u<n;u++)
//            cout<<save[u]<<" ";
//        cout<<endl;
    }

//    if(n%2==1)
//    {
//        save[n/2]*=(-1);
//
//        if(total<countArr(a,n))
//            total = countArr(a,n);
//    }

    cout<<total<<endl;

    return 0;
}
