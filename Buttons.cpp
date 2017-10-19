#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1,j=n;i<n;i++,j--)
    {
        sum = sum + i*j-(i-1);
    }
    cout<<sum+1<<endl;

    return 0;
}
