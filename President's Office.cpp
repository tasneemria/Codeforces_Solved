#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    char ch;
    cin>>n>>m;
    cin>>ch;
    int minR=1000,minC=1000,maxR=-20,maxC=-20;
    char arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==ch)
            {
                if(minR>i)
                    minR = i;
                if(minC>j)
                    minC = j;
                if(maxR<i)
                    maxR = i;
                if(maxC<j)
                    maxC = j;
            }
        }
    }

    //cout<<minR<<" "<<minC<<" "<<maxR<<" "<<maxC<<endl;
    int deputy=0;
    char c;

    //left
    if(minC>0)
    {
        c = arr[minR][minC-1];
      //  cout<<c<<endl;
        if(c!='.')
            deputy++;
    }
    for(int i=minR+1; i<=maxR && minC>0; i++)
    {
        char c1;
        c1 = arr[i][minC-1];
        //cout<<c1<<i<<endl;
        if(c1!=c && c1!='.')
        {
            deputy++;
        }
        c = c1;
    }

    //up
    if(minR>0)
    {
        c = arr[minR-1][minC];
        if(c!='.')
            deputy++;
    }
    for(int i=minC+1; i<=maxC && minR>0; i++)
    {
        char c1;
        c1 = arr[minR-1][i];
        if(c1!='.' && c1!=c)
        {
            deputy++;
        }
        c = c1;
    }

    //right
    if(maxC<m-1)
    {
        c = arr[minR][maxC+1];
        if(c!='.')
            deputy++;
    }
    for(int i=minR+1; i<=maxR && maxC<m-1; i++)
    {
        char c1;
        c1 = arr[i][maxC+1];
        if(c1!='.' && c1!=c)
        {
            deputy++;
        }
        c = c1;
    }

    //down
    if(maxR<n-1)
    {
        c = arr[maxR+1][minC];
        if(c!='.')
            deputy++;
    }
    for(int i=minC+1; i<=maxC && maxR<n-1;i++)
    {
        char c1;
        c1 = arr[maxR+1][i];
        if(c1!='.' && c1!=c)
        {
            deputy++;
        }
        c = c1;
    }
    cout<<deputy<<endl;


    return 0;
}
