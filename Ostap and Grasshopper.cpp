#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    char str[n+1];
    int f,l,dif;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        if(str[i]=='G')
            f = i;
        else if(str[i]=='T')
            l = i;
    }
    str[n+1] = '\0';
    dif = abs(f-l);

    int Min,Max,flag=0;
    Min = min(f,l);
    Max = max(f,l);
    //cout<<"dif "<<dif<<endl;
    ////cout<<"min "<<Min<<endl;
    //cout<<"max "<<Max<<endl;

    if((dif%k) != 0)
    {
        cout<<"NO"<<endl;
    }
    else if(dif>k)
    {
        for(int i=Min;i<Max;)
        {
            if(str[i+k] == '#')
            {
                //cout<<"2nd "<<endl;
                flag = 1;
                cout<<"NO"<<endl;
                break;
            }
            i = i+k;
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }
    else
        cout<<"YES"<<endl;


    return 0;
}
