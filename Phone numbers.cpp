#include<iostream>
#include<string>

using namespace std;

int main()
{
    string inpstr;
    int digit;
    cin>>digit;
    cin>>inpstr;
    if(digit%2==0)
    {
        for(int i=0;i<inpstr.length()-2;i=i+2)
        {
            cout<<inpstr[i]<<inpstr[i+1]<<"-";
        }
        cout<<inpstr[inpstr.length()-2]<<inpstr[inpstr.length()-1]<<endl;
    }
    else
    {
        for(int i=0;i<inpstr.length()-3;i=i+2)
        {
            cout<<inpstr[i]<<inpstr[i+1]<<"-";
        }
        cout<<inpstr[inpstr.length()-3]<<inpstr[inpstr.length()-2]<<inpstr[inpstr.length()-1]<<endl;
    }

    return 0;
}
