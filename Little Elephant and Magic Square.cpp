#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    }

    int a,b,c;
    a = arr[0][1]+arr[0][2];
    b = arr[1][0]+arr[1][2];
    c = arr[2][0]+arr[2][1];
    int mx,result;
    mx = max(a,b);
    mx = max(mx,c);
    a = mx-a+1;
    b = mx-b+1;
    c = mx-c+1;
    result = mx+1;
    //cout<<result<<endl;
    //cout<<a<<b<<c<<endl;
    while(result!=(a+b+c))
    {
        a++;
        b++;
        c++;
        //cout<<a<<b<<c<<endl;
        result++;
    }
    arr[0][0] = a;
    arr[1][1] = b;
    arr[2][2] = c;


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
