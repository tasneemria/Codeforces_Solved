#include<bits/stdc++.h>
using namespace std;

int main()
{
    int white=0,black=0;
    char ch;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>ch;
            if(ch>='A' && ch<='Z')
            {
                if(ch=='Q')
                {
                    white+=9;
                }
            }
        }
    }

    return 0;
}
