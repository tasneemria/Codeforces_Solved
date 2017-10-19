#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int n1=0,n2=0,i,j,k;
    if(a[0]=='0')
    {
        for(i=0;i<a.length();i++)
        {
            if(a[i]!='0')
                break;
        }
        n1 = i;
    }
    if(b[0]=='0')
    {
        for(i=0;i<b.length();i++)
        {
            if(b[i]!='0')
                break;
        }
        n2 = i;
    }

    if(a.length()-n1 > b.length()-n2)
    {
        cout<<">"<<endl;
    }
    else if(b.length()-n2 > a.length()-n1)
    {
        cout<<"<"<<endl;
    }
    else if(a.length()-n1 == b.length()-n2)
    {
        for(i=n1,j=n2;i<a.length();i++,j++)
        {
            if(a[i]>b[j])
            {
                cout<<">"<<endl;
                break;
            }
            else if(a[i]<b[j])
            {
                cout<<"<"<<endl;
                break;
            }
        }
        if(i==a.length())
            cout<<"="<<endl;
    }

    return 0;
}
