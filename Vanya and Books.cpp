#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    long long sum = 0,mul = 9,diff = 1;
    for(int i=1;i<len;i++)
    {
        sum = sum+i*mul;
        mul = mul*10;
        diff*=10;
    }
    long long n = stoi(s);
    sum = sum+(n-diff+1)*len;
    cout<<sum<<endl;

    return 0;
}
