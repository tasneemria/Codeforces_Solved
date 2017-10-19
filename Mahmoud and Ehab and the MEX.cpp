#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,mex,exist=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            exist = 1;
            mex = i;
            break;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

    if(exist==0 && x<n)
    {
        cout<<1<<endl;
    }
    else if(mex==x)
    {
        cout<<0<<endl;
    }
    else
    {
        int calc = 0;
        for(int i=0;arr[i]<x;i++)
        {
            calc++;
        }
        //cout<<calc<<endl;
        cout<<x-calc<<endl;
    }

    return 0;
}

/*
100 100

58 88 12 71 22 1 40 19 73 20 67 48 57 17 69 36 100 35 33 37 72 55 52 8 89 85 47 42 78 70 81 86 11 9 68 99 6 16 21 61 53 98 23 62 32 59 51 0 87 24 50 30 65 10 80 95 7 92 25 74 60 79 91 5 13 31 75 38 90 94 46 66 93 34 14 41 28 2 76 84 43 96 3 56 49 82 27 77 64 63 4 45 18 29 54 39 15 26 83 44
*/

/*
100 100
79 13 21 11 3 87 28 40 29 4 96 34 8 78 61 46 33 45 99 30 92 67 22 97 39 86 73 31 74 44 62 55 57 2 54 63 80 69 25 48 77 98 17 93 15 16 89 12 43 23 37 95 14 38 83 90 49 56 72 10 20 0 50 71 70 88 19 1 76 81 52 41 82 68 85 47 6 7 35 60 18 64 75 84 27 9 65 91 94 42 53 24 66 26 59 36 51 32 5 58
*/



