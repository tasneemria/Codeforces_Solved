#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int ten[10];

int cnt(int num)
{
    string s = to_string(num);
    int calc = 0;
    for(int i=0;i<s.length();i++)
    {
        calc+=ten[s[i]-48];
    }
    return calc;
    //cout<<s<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    arr[0] = 6;
    arr[1] = 2+arr[0];
    arr[2] = 5+arr[1];
    arr[3] = 5+arr[2];
    arr[4] = 4+arr[3];
    arr[5] = 5+arr[4];
    arr[6] = 6+arr[5];
    arr[7] = 3+arr[6];
    arr[8] = 7+arr[7];
    arr[9] = 6+arr[8];

    ten[0] = 6;
    for(int i=1;i<10;i++)
    {
        ten[i] = arr[i]-arr[i-1];
    }

    int calc = 0;
    for(int i=a;i<=b;i++)
    {
        calc += cnt(i);
    }
    //cout<<cnt(10);
    //cout<<arr[b]-arr[a]<<endl;
    cout<<calc<<endl;

    return 0;
}
