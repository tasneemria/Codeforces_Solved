#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }

    int row=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i][0]=='O' && arr[i][1]=='O')
        {
            row = i;
            arr[i][0] = '+';
            arr[i][1] = '+';
            break;
        }
        else if(arr[i][3]=='O' && arr[i][4]=='O')
        {
            row = i;
            arr[i][3] = '+';
            arr[i][4] = '+';
            break;
        }
    }

    if(row==-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
