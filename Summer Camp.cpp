#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,idx=1;
    cin>>n;
    string str="",str1;
    for(int i=1;i<400;i++)
    {
        str1 = to_string(i);
        str = str+str1;
    }
    cout<<str[n-1]<<endl;

    return 0;
}
