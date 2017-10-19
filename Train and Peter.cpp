#include<iostream>

using namespace std;

int main()
{
    string ch1,ch2,ch3;
    cin>>ch1>>ch2>>ch3;
    int i,j,k,stpos=0,match1=0,match2=0;
    int frwrd=0,backwrd=0,both=0;

    for(i=0;i<ch1.length();)
    {
        if(ch1[i]==ch2[0])
        {
            for(j=1,k=i+1;j<ch2.length();)
            {
                if(ch1[k]!=ch2[j])
                    break;
                else
                {
                    j++;
                    k++;
                }
            }
            if(j==ch2.length())
            {
                match1 = k;
                break;
            }
            else
            {
                i++;
            }
        }
        else
            i++;
    }

    for(i=match1;i<ch1.length();)
    {
        if(ch1[i]==ch3[0])
        {
            for(j=1,k=i+1;j<ch3.length();)
            {
                if(ch1[k]!=ch3[j])
                    break;
                else
                {
                    j++;
                    k++;
                }
            }
            if(j==ch3.length())
            {
                match2 = k;
                break;
            }
            else
            {
                i++;
            }
        }
        else
            i++;
    }

    if(match1!=0 && match2!=0)
        frwrd = 1;

    //cout<<match1<<" "<<match2<<endl;

    match1 = ch1.length();
    match2 = ch1.length();

    for(i=ch1.length()-1;i>=0;)
    {
        if(ch1[i]==ch2[0])
        {
            for(j=1,k=i-1;j<ch2.length();)
            {
                if(ch1[k]!=ch2[j])
                    break;
                else
                {
                    j++;
                    k--;
                }
            }
            if(j==ch2.length())
            {
                match1 = k;
                break;
            }
            else
            {
                i--;
            }
        }
        else
            i--;
    }

    for(i=match1;i>=0;)
    {
        if(ch1[i]==ch3[0])
        {
            for(j=1,k=i-1;j<ch3.length();)
            {
                if(ch1[k]!=ch3[j])
                    break;
                else
                {
                    j++;
                    k--;
                }
            }
            if(j==ch3.length())
            {
                match2 = k;
                break;
            }
            else
            {
                i--;
            }
        }
        else
            i--;
    }

    //cout<<match1<<" "<<match2<<endl;
    if(match1!=ch1.length() && match2!=ch1.length())
        backwrd = 1;

    if(frwrd==1 && backwrd==1)
        cout<<"both"<<endl;
    else if(frwrd==1)
        cout<<"forward"<<endl;
    else if(backwrd==1)
        cout<<"backward"<<endl;
    else
        cout<<"fantasy"<<endl;

    return 0;
}
