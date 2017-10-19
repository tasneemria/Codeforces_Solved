#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag = 0;
    char ch[101];
    //yes
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        int cnt = 0;
        gets(ch);
        for(int j=0;j<strlen(ch);j++)
        {
            if(ch[j]=='a' || ch[j]=='e' || ch[j]=='i' || ch[j]=='o' || ch[j]=='u' || ch[j]=='y')
                cnt++;
        }
        //cout<<cnt<<endl;
        if(cnt!=arr[i])
        {
            flag = 1;
            //cout<<"NO"<<endl;
            //return 0;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
