#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s2.length()>s1.length())
    {
        cout<<"need tree"<<endl;
    }
    else if(s1.length()==s2.length())
    {
        int flag = 0;
        string str1 = s1,str2 = s2;
        for(int i=0; i<s2.length(); i++)
        {
            for(int j=0; j<s1.length(); j++)
            {
                if(s2[i]==str1[j])
                {
                    str2[i] = '*';
                    str1[j] = '*';
                    break;
                }
            }
        }
        for(int i=0; i<str2.length(); i++)
        {
            if(str2[i]!='*')
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            cout<<"array"<<endl;
        else
            cout<<"need tree"<<endl;
    }
    else if(s1.length()>s2.length())
    {
        string str1=s1,str2=s2;
        int savej=0;
        for(int i=0; i<s2.length(); i++)
        {
            for(int j=savej; j<s1.length(); j++)
            {
                if(str2[i]==str1[j])
                {
                    str2[i] = '*';
                    str1[j] = '*';
                    savej = j;
                    break;
                }
            }
        }
        int flag = 0;
        for(int i=0; i<str2.length(); i++)
        {
            if(str2[i]!='*')
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"automaton"<<endl;
        }
        else
        {
            string str1=s1,str2=s2;
            for(int i=0; i<s2.length(); i++)
            {
                for(int j=0; j<s1.length(); j++)
                {
                    if(str2[i]==str1[j])
                    {
                        str2[i] = '*';
                        str1[j] = '*';
                        break;
                    }
                }
            }
            int flag = 0;
            for(int i=0; i<str2.length(); i++)
            {
                if(str2[i]!='*')
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"both"<<endl;
            }
            else
            {
                cout<<"need tree"<<endl;
            }
        }
    }

    return 0;
}
