#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inpstr;
    cin>>inpstr;
    cout<<inpstr.substr(0,3)<<endl;
    string str1,str2;
    string str = inpstr.substr(0,1);
    if(inpstr.find("s")!=-1)
        cout<<inpstr.find("s")<<endl;

    cout<<inpstr.substr(3,inpstr.length())<<endl;

    return 0;
}

