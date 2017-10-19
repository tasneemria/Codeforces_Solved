#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string inpstr;
    cin>>inpstr;
    cout<<'/';
    int flag=0;
    int len = inpstr.length();
    for(int i=0;i<len;)
    {
        if(i==0)
            flag=1;
        else
            flag=0;
        if(inpstr[i]!='/')
        {
            cout<<inpstr[i];
            i++;
        }
        else
        {
            while(1)
            {
                i++;
                if(i==len || inpstr[i]!='/')
                    break;
            }
            if(i==len)
                break;
            else if(flag==0)
                cout<<'/';
        }
    }

    return 0;
}
