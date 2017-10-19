#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],save=n,arr2[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i] = 0;
    }
    for(int i=0;i<n;i++){
        arr2[arr[i]] = i+1;
    }
//    for(int i=1;i<=n;i++){
//        cout<<arr2[i]<<" ";
//
//    }
    for(int i=0;i<n;i++)
    {
        if(save==arr[i])
        {
            cout<<save<<" ";
            save--;
            while(1)
            {
                if(save==0)
                    break;
                if((i+1)>arr2[save])
                {
                    cout<<save<<" ";
                    save--;
                }
                else
                {
                    break;
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<endl;
        }
    }


    return 0;
}
