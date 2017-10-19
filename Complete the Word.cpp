#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int arr[26];
    for(int i=0; i<26; i++)
    {
        arr[i] = 0;
    }
    if(str.length()<26)
    {
        cout<<-1<<endl;
    }
    else
    {
        string s;
        int ques=0,dis=0,flag=0,qarr[26];
        for(int j=0; j<26; j++)
        {
            if(str[j]!='?')
            {
                if(arr[str[j]-65]==0)
                {
                    arr[str[j]-65] = 1;
                    dis++;
                }
                else if(arr[str[j]-65]==1)
                {
                    dis--;
                    arr[str[j]-65]++;
                }
                else if(arr[str[j]-65]>1)
                {
                    arr[str[j]-65]++;
                }
            }
            else if(str[j]=='?')
            {
                ques++;
            }
        }

        int idx = 0;
        for(int i=0; i<26; i++)
        {
            if(arr[i]==0)
            {
                qarr[idx++] = i+65;
                //cout<<(char)qarr[idx-1]<<endl;
            }
        }
        //cout<<"distinct "<<dis<<endl;
        //cout<<"ques"<<ques<<endl;
        for(int i=1; i<=str.length()-25; i++)
        {
            s = str.substr(i,26);
            if(dis+ques==26)
            {
                flag = 1;
                idx = 0;
                for(int k=i-1; k<i+25; k++)
                {
                    if(str[k]=='?')
                    {
                        str[k] = (char)qarr[idx];
                        //cout<<str[k]<<endl;
                        idx++;
                    }
                }
                for(int l=0;l<str.length();l++)
                {
                    if(str[l]=='?')
                        str[l] = 'A';
                }
                cout<<str<<endl;
            }
            if(flag==1)
                break;
            else
            {
                if(str[i-1]=='?')
                {
                    ques--;
                }
                else if(arr[str[i-1]-65]==1)
                {
                    dis--;
                    arr[str[i-1]-65]--;
                }
                else if(arr[str[i-1]-65]>1)
                {
                    arr[str[i-1]-65]--;
                    if(arr[str[i-1]-65]==1)
                    {
                        dis++;
                    }
                }

                if(s[25]=='?')
                {
                    ques++;
                }
                else if(arr[s[25]-65]==1)
                {
                    dis--;
                    arr[s[25]-65]++;
                }
                else if(arr[s[25]-65]>1)
                {
                    arr[s[25]-65]++;
                }
                else if(arr[s[25]-65]==0)
                {
                    dis++;
                    arr[s[25]-65]++;
                }

                idx = 0;
                for(int i=0; i<26; i++)
                {
                    if(arr[i]==0)
                    {
                        qarr[idx++] = i+65;
                        //cout<<(char)qarr[idx-1]<<endl;
                    }
                }
            }
            //cout<<"ques "<<ques<<" dis "<<dis<<endl;
        }
        if(flag==0)
        {
            cout<<-1<<endl;
        }
    }
    //getch();
    return 0;
}
