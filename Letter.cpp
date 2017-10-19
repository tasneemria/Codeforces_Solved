#include<iostream>
using namespace std;

int main()
{
    int n,m;
    char arr[50][50];
    cin>>n>>m;
    int minr=100,minc=100,hir=-100,hic=-100;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='*' && minr>=i)
                minr = i;
            if(arr[i][j]=='*' && minc>=j)
                minc = j;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='*' && hir<=i)
                hir = i;
            if(arr[i][j]=='*' && hic<=j)
                hic = j;
        }
    }

    for(int i=minr;i<=hir;i++)
    {
        for(int j=minc;j<=hic;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}
