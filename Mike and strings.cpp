#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,mn=INFINITY;
    cin>>n;
    string str[n];
    for(int i=0; i<n; i++)
        cin>>str[i];
    int tcnt=0,cnt=0,len=str[0].length();
    string s;
    char ch;
    for(int i=0; i<n; i++)
    {
        cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(j==i)
                continue;
            s = str[j];
            int flag = 0;
            if(s==str[i])
            {
                flag = 1;
                cnt+=0;
            }
            else
            {
                for(k=1; k<len; k++)
                {
                    ch = s[0];
                    for(l=0; l<len-1; l++)
                    {
                        s[l] = s[l+1];
                    }
                    s[len-1] = ch;
                    if(s==str[i])
                    {
                        flag = 1;
                        cnt+=k;
                        break;
                    }
                }

            }
            if(flag==0)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        if(mn>cnt)
            mn = cnt;
    }
    cout<<mn<<endl;

    return 0;
}
