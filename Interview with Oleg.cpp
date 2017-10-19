#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin>>len;
    string str;
    cin>>str;
    int i,j;
    for(i=0;i<len;)
    {
        if(str[i]=='o')
        {
            if(str[i+1]=='g' && str[i+2]=='o')
            {
                for(j=i+3;j<len;j+=2)
                {
                    if(str[j]!='g' || str[j+1]!='o')
                    {
                        break;
                    }
                }
                cout<<"***";
                i = j;
            }
            else
            {
                cout<<"o";
                i++;
            }
        }
        else
        {
            cout<<str[i];
            i++;
        }
    }

    return 0;
}
