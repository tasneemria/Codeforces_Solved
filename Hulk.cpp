#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"I hate ";
    for(int i=2;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<"that I love ";
        }
        else
        {
            cout<<"that I hate ";
        }
    }
    if(n==1)
        cout<<"it"<<endl;
    else if(n%2==1)
    {
        cout<<"that I hate it"<<endl;
    }
    else
    {
        cout<<"that I love it"<<endl;
    }

    return 0;
}
