#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    if(str.find("AB")==-1 || str.find("BA")==-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int pos1,pos2;
        pos1 = str.find("AB");
        pos2 = str.find("BA");
        string subS;
        if(pos1+1==pos2)
        {
            subS = str.substr(pos2+2,str.length()-1);
            if(subS.find("AB")!=-1 || subS.find("BA")!=-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(pos2+1==pos1)
        {
            subS = str.substr(pos1+2,str.length()-1);
            if(subS.find("BA")!=-1 || subS.find("AB")!=-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(pos1<pos2)
        {
            subS = str.substr(pos1+2,str.length()-1);
            if(subS.find("BA")!=-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            subS = str.substr(pos2+2,str.length()-1);
            if(subS.find("AB")!=-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}
