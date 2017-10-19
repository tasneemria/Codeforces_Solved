#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,s,s2;
    cin>>str;
    long long metal=0,heavy=0;
    int i,j;
    if(str.length()>=10)
    {
        for(i=0; i<str.length()-4; i++)
        {
            s = str.substr(i,5);
            if(s=="heavy")
            {
                heavy++;
                for(j=i+5; j<str.length()-4; j++)
                {
                    s2 = str.substr(j,5);
                    if(s2=="heavy")
                        heavy++;
                    else if(s2=="metal")
                    {
                        metal+=heavy;
                    }
                }
                break;
            }
        }
        cout<<metal<<endl;
    }
    else
        cout<<0<<endl;



    return 0;
}
