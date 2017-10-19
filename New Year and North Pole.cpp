#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[50];
    string str[50];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i]>>str[i];
    }
    int south=0,north=0;
    int result=0;
    if(str[0]!="South")
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(str[i]=="South")
            {
                result+=arr[i];
                if(result>20000)
                {
                     cout<<"NO"<<endl;
                     result = -100;
                     break;
                }
            }
            else if(str[i]=="North")
            {
                result-=arr[i];
                if(result<0)
                {
                    cout<<"NO"<<endl;
                    result = -100;
                    break;
                }
            }
            if(result==0)
            {
                if(i<n-1 && str[i+1]!="South")
                {
                    cout<<"NO"<<endl;
                    result = -100;
                    break;
                }
            }
            if(result==20000)
            {
                if(i<n-1 && str[i+1]!="North")
                {
                    cout<<"NO"<<endl;
                    result = -100;
                    break;
                }
            }
        }
        if(result==0)
            cout<<"YES"<<endl;
        else if(result!=-100)
            cout<<"NO"<<endl;
    }

    return 0;
}
