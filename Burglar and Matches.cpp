#include<iostream>
using namespace std;

int main()
{
    int n,m,a[20],b[20];
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            if(b[j]<b[j+1])
            {
                int t1,t2;
                t1 = b[j];
                b[j] = b[j+1];
                b[j+1] = t1;
                t2 = a[j];
                a[j] = a[j+1];
                a[j+1] = t2;
            }
        }
    }
    int num = 0,result = 0;
    while(n)
    {
        if(num==m)
            break;
        if(a[num]<=n)
        {
            result = result+a[num]*b[num];
            n = n-a[num];
        }
        else if(a[num]>n)
        {
            result = result + n*b[num];
            n = 0;
        }
        num++;
    }
    cout<<result<<endl;

    return 0;
}
