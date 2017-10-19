#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int k;
    cin>>k;
    if(str.length()<=k)
    {
        cout<<str.length()-1<<endl;
    }
    else
    {
        int zero = 0,cnt = 0;
        for(int i=str.length()-1;i>0;i--)
        {
            if(str[i]!='0')
            {
                cnt++;
            }
            else
            {
                zero++;
            }

            if(zero==k)
            {
                break;
            }
        }
        if(zero!=k)
            cout<<str.length()-1<<endl;
        else
            cout<<cnt<<endl;
    }

    return 0;
}
