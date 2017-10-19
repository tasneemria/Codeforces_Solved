#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    string inpstr;
    cin>>inpstr;
    int flag;
    for(int i=0; i<8; i++)
    {
        flag = 0;
        if(inpstr.length()==str[i].length())
        {
            for(int j=0; j<inpstr.length(); j++)
            {
                if(inpstr[j]!='.' && inpstr[j]!=str[i][j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<str[i]<<endl;
                break;
            }
        }
    }

    return 0;
}
