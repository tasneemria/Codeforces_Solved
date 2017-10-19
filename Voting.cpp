#include<iostream>

using namespace std;

int sum(int *arr,int n)
{
    int a=0;
    for(int i=0;i<n;i++)
        a+=arr[i];
    return a;
}

int main()
{
    int n,totalD=0,totalR=0;
    char str[200000];
    cin>>n;
    cin>>str;

    int arr[200000];
    for(int i=0;i<n;i++)
    {
        arr[i] = 1;
        if(str[i]=='R')
            totalR++;
        else if(str[i]=='D')
            totalD++;
    }
    int total=n;
//        if(total==1)
//        {
//            cout<<"while loop break "<<endl;
//            break;
//        }

        for(int i=0;i<n;)
        {
            if(totalD==0 && totalR!=0)
                break;
            else if(totalR==0 && totalD!=0)
                break;
            if(sum(arr,n)==1)
                break;
            if(str[i]=='D' && arr[i]==1)
            {
                if(i==n-1)
                    i = -1;
                for(int j=i+1;j<n;j++)
                {
                    if(str[j]=='R' && arr[j]==1)
                    {
                        arr[j] = 0;
                        total--;
                        totalR--;
                        //cout<<"if "<<total<<endl;
                        break;
                    }
                }
            }
            else if(str[i]=='R' && arr[i]==1)
            {
                if(i==n-1)
                    i = -1;
                for(int j=i+1;j<n;j++)
                {
                    if(str[j]=='D' && arr[j]!=0)
                    {
                        arr[j] = 0;
                        total--;
                        totalD--;
                        //cout<<"else if "<<total<<endl;
                        break;
                    }
                }
            }
            //cout<<arr[i]<<endl;
            i++;
        }
        //cout<<"outta loop"<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<str[i]<<endl;
            break;
        }
    }

    return 0;
}
