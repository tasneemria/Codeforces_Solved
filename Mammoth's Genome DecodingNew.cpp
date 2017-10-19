#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,g=0,c=0,t=0,ques=0;
    int need = n/4;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A')
            a++;
        else if(str[i]=='G')
            g++;
        else if(str[i]=='C')
            c++;
        else if(str[i]=='T')
            t++;
        else if(str[i]=='?')
            ques++;
    }

    a = need-a;
    g = need-g;
    c = need-c;
    t = need-t;

    if((n%4)!=0)
    {
        cout<<"==="<<endl;
    }
    else if((a+g+c+t) != ques)
        cout<<"==="<<endl;
    else if(a<0 || c<0 || g<0 || t<0)
        cout<<"==="<<endl;
    else
    {
        for(int i=0;(i<n) && a;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'A';
                a--;
            }
        }
        for(int i=0;(i<n) && c;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'C';
                c--;
            }
        }
        for(int i=0;(i<n) && g;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'G';
                g--;
            }
        }
        for(int i=0;(i<n) && t;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'T';
                t--;
            }
        }

        cout<<str<<endl;
    }

    return 0;
}
